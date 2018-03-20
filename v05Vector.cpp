#include "sorting.h"

bool compareByType(const Student &a, const Student &b)
{
    return a.type < b.type;
}

void Sorting(size_t quantity, std::string k, std::string w)
{
    std::vector<Student> s;
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
    std::sort(s.begin(), s.end(), compareByType);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(size_t i = 0; i < quantity; i++)
    {
        input << s[i].name << " " << s[i].surname << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << s[i].Hgrade[j] << " ";
        }
        input << s[i].Egrade << " ";
        input << s[i].type << std::endl;
    }
    input.close();
}
