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

void ContainerL(size_t quantity, std::string k, std::string w)
{
   /* std::list<Student> st;
    std::list<Student> winner;
    std::list<Student> loser;
    Student s;
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
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
        file >> name >> surname;
        s.namei(name);
        s.surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s.Hgradei(grade);
            vidurkis += grade;
            //std::cout << s.Hgrade[j] << std::endl;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> grade2;
        s.typei(type);
        s.Egradei(grade2);
        st.push_back(s);
        s = {};
    }

    for(std::list<Student>::iterator it = st.begin(); it !=st.end(); ++it)
    {
        if(it->typeo() == "Winner")
        {
            winner.push_back(*it);
        }
        else
        {
            loser.push_back(*it);
        }
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(std::list<Student>::iterator it = loser.begin(); it != loser.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }

    for(std::list<Student>::iterator it = winner.begin(); it != winner.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }
    input.close();
*/
}

/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container
 * @param quantity
 * @param k
 * @param w
 */

void ContainerL2(size_t quantity, std::string k, std::string w)
{/*
    std::list<Student> st;
    std::list<Student> winner;
    Student s;
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
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
        file >> name >> surname;
        s.namei(name);
        s.surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s.Hgradei(grade);
            vidurkis += grade;
            //std::cout << s.Hgrade[j] << std::endl;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> grade2;
        s.typei(type);
        s.Egradei(grade2);
        st.push_back(s);
        s = {};
    }

    for(std::list<Student>::iterator it = st.begin(); it !=st.end(); ++it)
    {
        if(it->typeo() == "Winner")
        {
            winner.push_back(*it);
        }
    }
    st.erase( std::remove_if(st.begin(), st.end(), IsWinner), st.end() );
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(std::list<Student>::iterator it = st.begin(); it != st.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }

    for(std::list<Student>::iterator it = winner.begin(); it != winner.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }
    input.close();*/

}

/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container, but without using
 * algorithms
 * @param quantity
 * @param k
 * @param w
 */

void ContainerL2Unoptimized(size_t quantity, std::string k, std::string w)
{
    /*std::list<Student> st;
    std::list<Student> winner;
    Student s;

    std::string name;
    std::string surname;
    std::string type;
    int grade2;
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
        file >> name >> surname;
        s.namei(name);
        s.surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s.Hgradei(grade);
            vidurkis += grade;
            //std::cout << s.Hgrade[j] << std::endl;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> grade2;
        s.typei(type);
        s.Egradei(grade2);
        st.push_back(s);
        s = {};
    }

    for(std::list<Student>::iterator it = st.begin(); it !=st.end(); ++it)
    {
        if(it->typeo() == "Winner")
        {
            winner.push_back(*it);
            it = st.erase(it);
        }
    }
    st.erase( std::remove_if(st.begin(), st.end(), IsWinner), st.end() );
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(std::list<Student>::iterator it = st.begin(); it != st.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }

    for(std::list<Student>::iterator it = winner.begin(); it != winner.end(); ++it)
    {
        std::string n, sur;
        n = (it)->nameo();
        sur = (it)->surnameo();
        input << n << " " << sur << " ";
        for(size_t j = 0; j < 5; j++)
        {
            int grade = (it)->Hgradeo(j);
            input << grade << " ";
        }
        int e = (it)->Egradeo();
        std::string word = (it)->typeo();

        input << e << " ";
        input << word << std::endl;
    }
    input.close();
*/
}