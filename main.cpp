
#include "fun.h"
#include "sorting.h"
int main()
{
    int homeworkquantity = 5;
    const double proc1 = 0.4;
    const double proc2 = 0.6;
    int option3 = 0;
    do
    {
        std::cout << "1. Enter grades yourself\n2. Get grades from table\n3. Generate student files\n4. Check performance\nEnter option: ";
        option3 = Check(1, 4);

        if(option3 == 2)
        {
            fun(homeworkquantity, proc1, proc2);
        }

        if(option3 == 1)
        {
            fun2(proc1, proc2);
        }
        if(option3 == 3)
        {
            print();
        }
        if(option3 == 4)
        {
            PerformanceCheck();
        }

        std::cout << "Do you want to continue?\n1. Yes\n2. No\n";
        option3 = Check(1, 2);

    }while(option3 != 2);


    return 0;
}

