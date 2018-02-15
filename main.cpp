#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <stdio.h>
#include <time.h>

int main()
{
    std::random_device rseed;
    std::mt19937 rgen(rseed()*time(0)); // mersenne_twister
    std::uniform_int_distribution<int> idist(1,10); // [1,10]
    const double proc1 = 0.4;
    const double proc2 = 0.6;
    std::string name;
    std::string surname;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your surname: ";
    std::cin >> surname;
    int quantity = 0;
    std::cout << "Enter the quantity of the students homework: ";
    std::cin >> quantity;
    double Hgrade[quantity];
    int option = 0;
    while(option == 0)
    {
        std::cout << "1. Enter grades yourself\n2. Enter random grades\nEnter option: ";
        std::cin >> option;
        if(option == 1 || option == 2)
        {
            for(int i = 0; i < quantity; i++)
            {
                std::cout << "Enter homework nr. " << i + 1 << ": ";
                if(option == 1)
                {
                    std::cin >> Hgrade[i];
                }
                else
                {
                    Hgrade[i] = idist(rgen);
                    std::cout << Hgrade[i] << std::endl;
                }
                //std::cout << Hgrade[i] << std::endl;
            }
        }
        else
        {
            std::cout << "There is no such option. Please choose an existing option." << std::endl;
            option = 0;
        }
    }

    double Egrade;
    std::cout << "Enter exam grade: ";
    std::cin >> Egrade;
    option = 0;
    double vidurkisg = 0;
    double vidurkis = 0;
    int number = 0;

    while(option == 0)
    {
        std::cout << "1. Count as vidurkis\n2. Count as mediana\nEnter option: ";
        std::cin >> option;
        if(option == 1)
        {
            for(int i = 0; i < quantity; i++)
            {
                vidurkisg += Hgrade[i];
            }
            vidurkisg /= quantity;
        }
        if(option == 2)
        {
            double small = 0;
            double big = 0;
            for(int i = 0; i < quantity - 1; i++)
            {
                for(int j = 0; j < quantity; j++)
                {
                    if(j > i)
                    {
                        if(Hgrade[i] > Hgrade[j])
                        {
                            big = Hgrade[i];
                            small = Hgrade[j];
                            Hgrade[i] = small;
                            Hgrade[j] = big;
                        }
                    }
                }
            }
            if(quantity % 2 == 0)
            {
                number = quantity / 2;
                vidurkisg = (Hgrade[number - 1] + Hgrade[number]) / 2;
            }
            else
            {
                number = quantity / 2;
                vidurkisg = Hgrade[number];
            }
        }
        if(option != 1 && option != 2)
        {
            std::cout << "There is no such option please choose again." << std::endl;
            option = 0;
        }
        vidurkis = proc1 * vidurkisg + proc2 * Egrade;

    }
    std::cout << std::setprecision(3) << vidurkis;

    return 0;
}

