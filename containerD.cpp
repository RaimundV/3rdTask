//
// Created by 123 on 2018-03-31.
//
#include "functions.h"

/**
 * Used for checking performance when pushing students to 2 diffeent contianers losers and winners
 * @param quantity
 * @param k
 * @param w
 */

void ContainerD(size_t quantity, std::string k, std::string w)
{
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

    std::deque<Student> s;
    std::deque<Student> winner;
    std::deque<Student> loser;

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
    for (size_t i = 0; i < quantity; i++)
    {
        if(s[i].typeo() == "Winner")
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
        input << loser[i].nameo() << " " << loser[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << loser[i].Hgradeo(j) << " ";
        }
        input << loser[i].Egradeo() << " ";
        input << loser[i].typeo() << std::endl;
    }
    for(size_t i = 0; i < winner.size(); i++)
    {
        input << winner[i].nameo() << " " << winner[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << winner[i].Hgradeo(j) << " ";
        }
        input << winner[i].Egradeo() << " ";
        input << winner[i].typeo() << std::endl;
    }
    input.close();

}

/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container
 * @param quantity
 * @param k
 * @param w
 */

void ContainerD2(size_t quantity, std::string k, std::string w)
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
    for (size_t i = 0; i < quantity; i++)
    {
        if(s[i].typeo() == "Winner")
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
        input << s[i].nameo() << " " << s[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << s[i].Hgradeo(j) << " ";
        }
        input << s[i].Egradeo() << " ";
        input << s[i].typeo() << std::endl;
    }
    for(size_t i = 0; i < winner.size(); i++)
    {
        input << winner[i].nameo() << " " << winner[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << winner[i].Hgradeo(j) << " ";
        }
        input << winner[i].Egradeo() << " ";
        input << winner[i].typeo() << std::endl;
    }
    input.close();

}

/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container, but without using
 * algorithms
 * @param quantity
 * @param k
 * @param w
 */

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
    size_t i = 0;
    while (i != s.size())
    {
        if(s[i].typeo() == "Winner")
        {
            winner.push_back(s[i]);
            s.erase(s.begin() + i);
        }
        else
        {
            i++;
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(size_t i = 0; i < s.size(); i++)
    {
        input << s[i].nameo() << " " << s[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << s[i].Hgradeo(j) << " ";
        }
        input << s[i].Egradeo() << " ";
        input << s[i].typeo() << std::endl;
    }
    for(size_t i = 0; i < winner.size(); i++)
    {
        input << winner[i].nameo() << " " << winner[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            input << winner[i].Hgradeo(j) << " ";
        }
        input << winner[i].Egradeo() << " ";
        input << winner[i].typeo() << std::endl;
    }
    input.close();

}


