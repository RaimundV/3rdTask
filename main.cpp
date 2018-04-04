
#include "fun.h"
#include "sorting.h"
#include "functions.h"
int main()
{
    int homeworkquantity = 5;
    const double proc1 = 0.4;
    const double proc2 = 0.6;
    int option3 = 0;
    do
    {
        std::cout << "1. Enter grades yourself\n2. Get grades from table\n3. Generate student files\n"
                "4. Check performance\n5. Check container performance\n6. Check container performance without arguments\nEnter option: ";
        option3 = Check(1, 6);

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
        if(option3 == 5 || option3 == 6)
        {
            ContainerPerformanceCheck(option3);
        }

        std::cout << "Do you want to continue?\n1. Yes\n2. No\n";
        option3 = Check(1, 2);

    }while(option3 != 2);


    return 0;
}

