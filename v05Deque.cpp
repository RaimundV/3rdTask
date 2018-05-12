#include "sorting.h"

void SortingD(size_t quantity, std::string k, std::string w)
{
    int grade;
    std::string name;
    std::string surname;
    std::string type;
    int grade2;

    std::deque<Student> s;
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
        file >> name >> surname;
        s[i].namei(name);
        s[i].surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s[i].Hgradei(grade);
            vidurkis += grade;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        s[i].typei(type);
        file >> grade2;
        s[i].Egradei(grade2);
    }
    std::sort(s.begin(), s.end());
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(size_t i = 0; i < quantity; i++)
    {
        input << s[i] << std::endl;
    }
    input.close();
}
