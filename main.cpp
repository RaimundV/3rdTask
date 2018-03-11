
#include "fun.h"

int main()
{
    int homeworkquantity = 5;
    const double proc1 = 0.4;
    const double proc2 = 0.6;
    int option3 = 0;
    do
    {
        std::cout << "1. Enter grades yourself\n2. Get grades from table\nEnter option: ";
        option3 = Check();
    }while(option3 != 1 && option3 != 2);

    if(option3 == 2)
    {
        fun(homeworkquantity, proc1, proc2);
    }

    if(option3 == 1)
    {
        fun2(proc1, proc2);
    }

    return 0;
}

