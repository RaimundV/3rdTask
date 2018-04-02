#include "sorting.h"
#include "functions.h"
void PerformanceCheck()
{
    std::cout << "\nSorting with vector:\n" << std::endl;

    Sorting(10, "wow1.txt", "input1.txt");

    Sorting(100, "wow2.txt", "input2.txt");

    Sorting(1000, "wow3.txt", "input3.txt");

    Sorting(10000, "wow4.txt", "input4.txt");

    Sorting(100000, "wow5.txt", "input5.txt");

    std::cout << "\nSorting with deque:\n" << std::endl;

    SortingD(10, "wow1.txt", "inputD1.txt");

    SortingD(100, "wow2.txt", "inputD2.txt");

    SortingD(1000, "wow3.txt", "inputD3.txt");

    SortingD(10000, "wow4.txt", "inputD4.txt");

    SortingD(100000, "wow5.txt", "inputD5.txt");

    std::cout << "\nSorting with list:\n" << std::endl;

    SortingL(10, "wow1.txt", "inputL1.txt");

    SortingL(100, "wow2.txt", "inputL2.txt");

    SortingL(1000, "wow3.txt", "inputL3.txt");

    SortingL(10000, "wow4.txt", "inputL4.txt");

    SortingL(100000, "wow5.txt", "inputL5.txt");
}
