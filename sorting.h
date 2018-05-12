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

/**
 * class that stores student information
 * @param name      Stores the students' name
 * @param surname   Stores the students' surname
 * @param Hgrade    Stores the students' homework grades
 * @param Egrade    Stores the students' exam grade
 * @param type      Stores the students' type (winner or loser)
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
    /**
     * default constructor
     */
    Student () : name(""), surname(""), Hgrade(0), Egrade(0), type("") {};
    /**
     * Constructor with 2 iterators for copying (moving) student information
     * @param it
     * @param it2
     */
    Student (std::vector<Student>::iterator it , std::vector<Student>::iterator it2 ) {
        for(std::vector<Student>::iterator iter = it; iter != it2; iter++)
        {
            Student tmp = *iter;
            *this = tmp;
        }
    };
    /**
     * A getter that returns Students' type
     * @return
     */
    inline std::string typeo()        const { return type; };
    /**
     * A getter that returns Students' name
     * @return
     */
    inline std::string nameo()        const { return name; };
    /**
     * A getter that returns Students' surname
     * @return
     */
    inline std::string surnameo()     const { return surname; };
    /**
     * A getter that returns Students' homework grade
     * @param i which grade to return in the container
     * @return
     */
    inline int Hgradeo(int i)         const { return Hgrade[i]; };
    /**
     * A getter that returns Students' exam grade
     * @return
     */
    inline int Egradeo()              const { return Egrade; };

    /**
     * A setter that sets the Students' name
     * @param sname student name
     */
    void namei(std::string& sname)       { name = sname; };
    /**
     * A setter that sets the Students' surname
     * @param ssurname student surname
     */
    void surnamei(std::string& ssurname) { surname = ssurname; };
    /**
     * A setter that sets the Students' homework grade
     * @param g grade
     */
    void Hgradei(int g)                  { Hgrade.push_back(g); };
    /**
     * A setter that sets the Students' exam grade
     * @param grade
     */
    void Egradei(int g)                  { Egrade = g; };
    /**
     * A setter that sets the Students' type
     * @param stype student type
     */
    void typei(std::string& stype)       { type = stype; };

    /**
     * output operator that outputs all of the students' information
     * @param output
     * @param S
     * @return output output of the Student
     */
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

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator<(Student b)
    {
        return typeo() < b.typeo();
    }

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator>(Student b)
    {
        return typeo() > b.typeo();
    }

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator==(Student b)
    {
        return typeo() == b.typeo();
    }
};


bool IsWinner(const Student& s);
/**
 * Function used to sort students with vector container
 * @param quantity
 * @param k
 * @param w
 */
void Sorting(size_t quantity, std::string k, std::string w);
/**
 * Function used to sort students with deque container
 * @param quantity
 * @param k
 * @param w
 */
void SortingD(size_t quantity, std::string k, std::string w);
/**
 * Function used to sort students with list container
 * @param quantity
 * @param k
 * @param w
 */
void SortingL(size_t quantity, std::string k, std::string w);
/**
 * Function used to generate random students
 * @param quantity
 * @param k
 */
void Random(size_t quantity, std::string k);

#endif
