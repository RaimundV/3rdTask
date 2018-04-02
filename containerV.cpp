//
// Created by 123 on 2018-03-31.
//
#include "sorting.h"

bool IsWinner(const Student& s)
{
    return s.type == "Winner";
}

void ContainerV(size_t quantity, std::string k, std::string w)
{
    std::vector<Student> s;
    std::vector<Student> winner;
    std::vector<Student> loser;
    int grade;
    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try
    {
        if(file){}
        else {throw 20;}
    }
    catch(...)
    {
        std::cout<< "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        s.push_back(Student());
        file >> s[i].name >> s[i].surname;
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s[i].Hgrade.push_back(grade);
            vidurkis += s[i].Hgrade[j];
        }

        s[i].type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> s[i].Egrade;
    }
    for (size_t i = 0; i < quantity; i++)
    {
        if(s[i].type == "Winner")
        {
            winner.push_back(s[i]);
        }
        else
        {
            loser.push_back(s[i]);
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(size_t i = 0; i < loser.size(); i++)
    {
        input << loser[i].name << " " << loser[i].surname << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << loser[i].Hgrade[j] << " ";
        }
        input << loser[i].Egrade << " ";
        input << loser[i].type << std::endl;
    }
    for(size_t i = 0; i < winner.size(); i++)
    {
        input << winner[i].name << " " << winner[i].surname << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << winner[i].Hgrade[j] << " ";
        }
        input << winner[i].Egrade << " ";
        input << winner[i].type << std::endl;
    }
    input.close();
}



void ContainerV2(size_t quantity, std::string k, std::string w)
{
    std::vector<Student> s;
    std::vector<Student> winner;
    int grade;
    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try
    {
        if(file){}
        else {throw 20;}
    }
    catch(...)
    {
        std::cout<< "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        s.push_back(Student());
        file >> s[i].name >> s[i].surname;
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s[i].Hgrade.push_back(grade);
            vidurkis += s[i].Hgrade[j];
        }

        s[i].type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> s[i].Egrade;
    }
    for (size_t i = 0; i < quantity; i++)
    {
        if(s[i].type == "Winner")
        {
            winner.push_back(s[i]);

        }
    }
    s.erase( std::remove_if(s.begin(), s.end(), IsWinner), s.end() );
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(size_t i = 0; i < s.size(); i++)
    {
        input << s[i].name << " " << s[i].surname << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << s[i].Hgrade[j] << " ";
        }
        input << s[i].Egrade << " ";
        input << s[i].type << std::endl;
    }
    for(size_t i = 0; i < winner.size(); i++)
    {
        input << winner[i].name << " " << winner[i].surname << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << winner[i].Hgrade[j] << " ";
        }
        input << winner[i].Egrade << " ";
        input << winner[i].type << std::endl;
    }
    input.close();
}