#include <iostream>
#include <string>
#include <iomanip>
#include <random>
int main()
{
    std::random_device rseed;
    std::mt19937 rgen(rseed()); // mersenne_twister
    std::uniform_int_distribution<int> idist(0,10); // [0,100]
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
    for(int i = 0; i < quantity; i++)
    {
        std::cout << "Enter homework nr. " << i + 1 << ": ";
        //std::cin >> Hgrade[i];
        Hgrade[i] = idist(rgen);
        std::cout << Hgrade[i] << std::endl;
    }
    double Egrade;
    std::cout << "Enter exam grade: ";
    std::cin >> Egrade;
    int option = 0;
    double vidurkisg = 0;
    double vidurkis = 0;
    while(option == 0)
    {
        std::cout << "1. Count as vidurkis\n 2. Count as mediana\n Enter option: ";
        std::cin >> option;
        if(option == 1)
        {
            for(int i = 0; i < quantity; i++)
            {
                vidurkisg += Hgrade[i];
            }
            vidurkisg /= quantity;
            vidurkis = proc1 * vidurkisg + proc2 * Egrade;
        }
        if(option == 2)
        {
           // vidurkisg = median(Hgrade);
        }
        if(option != 1 && option != 2)
        {
            std::cout << "There is no such option please choose again." << std::endl;
            option = 0;
        }
    }
    std::cout << std::setprecision(3) << vidurkis;

    return 0;
}
