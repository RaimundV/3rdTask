//
// Created by 123 on 2018-03-31.
//

#ifndef DARBAS2_FUNCTIONS_H
#define DARBAS2_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <random>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <list>
#include <deque>

/**
 * class that stores student information
 */

class Student
{
private:
    std::string name;
    std::string surname;
    std::vector<int> Hgrade;
    int Egrade;
    std::string type;
public:
    inline std::string typeo()        const { return type; };
    inline std::string nameo()        const { return name; };
    inline std::string surnameo()     const { return surname; };
    inline int Hgradeo(int i)         const { return Hgrade[i]; };
    inline int Egradeo()              const { return Egrade; };

    void namei(std::string& sname)       { name = sname; };
    void surnamei(std::string& ssurname) { surname = ssurname; };
    void Hgradei(int g)                  { Hgrade.push_back(g); };
    void Egradei(int g)                  { Egrade = g; };
    void typei(std::string& stype)       { type = stype; };

    friend std::ostream &operator<<( std::ostream &output, const Student &S )
    {
        output << S.name << " " << S.surname << " ";
        for (size_t i = 0; i < 5; i ++)
        {
            output << S.Hgrade[i] << " ";
        }
        output << S.Egrade << " " << S.type;
        return output;
    }

    bool operator<(Student b)
    {
        return typeo() < b.typeo();
    }
    bool operator>(Student b)
    {
        return typeo() > b.typeo();
    }
    bool operator==(Student b)
    {
        return typeo() == b.typeo();
    }
};

void ContainerV(size_t quantity, std::string k, std::string w);
void ContainerV2(size_t quantity, std::string k, std::string w);
void ContainerV2Unoptimized(size_t quantity, std::string k, std::string w);

void ContainerD(size_t quantity, std::string k, std::string w);
void ContainerD2(size_t quantity, std::string k, std::string w);
void ContainerD2Unoptimized(size_t quantity, std::string k, std::string w);

void ContainerL(size_t quantity, std::string k, std::string w);
void ContainerL2(size_t quantity, std::string k, std::string w);
void ContainerL2Unoptimized(size_t quantity, std::string k, std::string w);

bool IsWinner(const Student& s);

#endif //DARBAS2_FUNCTIONS_H
