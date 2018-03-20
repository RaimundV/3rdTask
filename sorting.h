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

struct Student
{
    std::string name;
    std::string surname;
    std::vector<int> Hgrade;
    int Egrade;
    std::string type;
};

void Sorting(size_t quantity, std::string k, std::string w);
void SortingD(size_t quantity, std::string k, std::string w);
void SortingL(size_t quantity, std::string k, std::string w);
void Random(size_t quantity, std::string k);
bool compareByType(const Student &a, const Student &b);
void print();

#endif
