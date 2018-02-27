
#include "fun.h"

int main()
{
    int homeworkquantity = 5;
    const double proc1 = 0.4;
    const double proc2 = 0.6;
    int option3 = 0;
    while(option3 == 0)
    {
        std::cout << "1. Enter grades yourself\n2. Get grades from table\nEnter option: ";
        std::cin >> option3;
        if(option3 == 1 || option3 == 2)
        {
            break;
        }
        else
        {
            std::cout << "There is no such option. Please choose an existing option." << std::endl;
            option3 = 0;
        }
    }

    if(option3 == 2) //ask????????
    {
        try
        {
            fun(homeworkquantity, proc1, proc2);
        }
        catch(int why)
        {
            std::cout << "The file does not exist" << why << std::endl;
        }
    }

    if(option3 == 1)
    {
        fun2(proc1, proc2);
    }

    return 0;
}

