#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <random>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <deque>
#include <iterator>


class Student
{
private:
    std::string name;
    std::string surname;
    std::vector<int> Hgrade;
    int Egrade;
    std::string type;
public:
    //Student () : Egrade(0) {};
    std::string typeo()        const { return type; };
    //Student(/*std::istream& is*/) {};
    std::string nameo()        const { return name; };
    std::string surnameo()     const { return surname; };
    int Hgradeo(int i) const { return Hgrade[i]; };
    int Egradeo()              const { return Egrade; };

    void namei(std::string& sname)       { name = sname; };
    void surnamei(std::string& ssurname) { surname = ssurname; };
    void Hgradei(int g)                 { Hgrade.push_back(g); };
    void Egradei(int g)                 { Egrade = g; };
    void typei(std::string& stype)       { type = stype; };
    std::istream& readStudent(std::istream&);



    /*friend bool operator==(const Student& lhs, const Student& rhs)
    {
        return lhs.name == rhs.name && lhs.type == rhs.type;
    }*/
};

bool IsWinner(const Student& s);
bool compareByType(const Student &a, const Student &b);
void Sorting(size_t quantity, std::string k, std::string w);
void SortingD(size_t quantity, std::string k, std::string w);
void SortingL(size_t quantity, std::string k, std::string w);
void Random(size_t quantity, std::string k);




#endif
