#include "fun.h"

int Check(int a, int b)
{
    int option3;
    if (!(std::cin >> option3))
    {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
    }

    if (option3 >=a && option3 <=b)
    {
        //break;
    }
    else
    {
        std::cout << "Invalid value. Please enter a correct value." << std::endl;
        option3 = 0;
    }
    return option3;
}
