//
// Created by 123 on 2018-03-31.
//
#include "functions.h"

void ContainerD(size_t quantity, std::string k, std::string w)
{
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

    std::deque<Student> s;
    //std::deque<Student> winner;
    //std::deque<Student> loser;

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

    std::deque<Student>::iterator bound;
    bound = std::partition(s.begin(), s.end(), IsWinner);
    std::deque<Student> winner(s.begin(), bound);
    std::deque<Student> loser(bound, s.end());
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(auto i = 0; i < loser.size(); i++)
    {
        input << loser[i] << std:: endl;
    }
    for(auto i = 0; i < winner.size(); i++)
    {
        input << winner[i] << std::endl;
    }
    input.close();

}

void ContainerD2(size_t quantity, std::string k, std::string w)
{
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

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
    /*for (size_t i = 0; i < quantity; i++)
    {
        if(s[i].typeo() == "Winner")
        {
            winner.push_back(s[i]);

        }
    }*/
    std::deque<Student>::iterator bound;
    bound = std::partition(s.begin(), s.end(), IsWinner);
    std::deque<Student> winner(s.begin(), bound);
    s.erase( std::remove_if(s.begin(), s.end(), IsWinner), s.end() );
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(auto i = 0; i < s.size(); i++)
    {
        input << s[i] << std::endl;
    }
    for(auto i = 0; i < winner.size(); i++)
    {
        input << winner[i] << std::endl;
    }
    input.close();

}

void ContainerD2Unoptimized(size_t quantity, std::string k, std::string w)
{
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

    std::deque<Student> s;
    std::deque<Student> winner;

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
    size_t j = 0;
    while (j != s.size())
    {
        if(s[j].typeo() == "Winner")
        {
            winner.push_back(s[j]);
            s.erase(s.begin() + j);
        }
        else
        {
            j++;
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(auto i = 0; i < s.size(); i++)
    {
        input << s[i] << std::endl;
    }
    for(auto i = 0; i < winner.size(); i++)
    {
        input << winner[i] << std::endl;
    }
    input.close();

}


