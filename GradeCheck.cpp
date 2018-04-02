#include "fun.h"
#include "functions.h"

int GradeCheck()
{
    int option3;
    if (!(std::cin >> option3))
    {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        option3 = 10000;
    }

    if (option3 >= 0 && option3 <= 10)
    {

    }
    else
    {
        std::cout << "Invalid value. Please enter a correct value." << std::endl;
        option3 = 10000;
    }
    return option3;
}
