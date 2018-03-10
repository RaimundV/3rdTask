//#include "fun.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <ratio>
#include <ctime>
#include <random>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <sstream>
#include <algorithm>

struct Student
{
    std::string name;
    std::string surname;
    std::vector<double> Hgrade;
    std::vector<double> Egrade;
    std::string type;
    bool operator()(const Student& lhs, const Student& rhs) const { lhs.type > rhs.type; }
};

bool compareByLength(const Student &a, const Student &b)
{
    return a.type.size() < b.type.size();
}

void Random(int quantity)
{
    std::vector<Student> s;
    std::random_device rseed;
    std::mt19937 rgen(rseed()*static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().
    time_since_epoch().count())); // mersenne_twister
    std::uniform_int_distribution<int> idist(1,10); // [1,10]
    std::ofstream file;
    double vidurkis;
    for (int i = 0; i < quantity; i++)
    {
        s.push_back(Student());
        s[i].name = "vard";
        s[i].surname = "pav";
        std::ostringstream convert;
        convert << i;
        s[i].name    += convert.str();
        s[i].surname += convert.str();
        //file << name << " " << surname << " ";
        vidurkis = 0;
        for(int j = 0; j < 5; j++)
        {
            s[i].Hgrade.push_back(idist(rgen));
            vidurkis += s[i].Hgrade[j];
        }
        if((vidurkis / 5.0) >= 6.0)
        {
            s[i].type = "Winner";
        }
        else
        {
            s[i].type = "Loser";
        }
        s[i].Egrade.push_back(idist(rgen));
    }
    std::sort(s.begin(), s.end(), compareByLength);
    file.open("wow.txt");
    for(int i = 0; i < quantity; i++)
    {
        file << s[i].name << " " << s[i].surname << " ";
        for(int j = 0; j < 5; j++)
        {
            file << s[i].Hgrade[j] << " ";
        }
        file << s[i].Egrade[0] << " ";
        file << s[i].type << std::endl;
    }
    file.close();
}

int main()
{
    using namespace std::chrono;
    int quantity;
    std::cout << "Enter amount of students: ";
    std::cin >> quantity;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    Random(quantity);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << "It took me " << time_span.count()/1000 << " seconds.";
    return 0;
}

