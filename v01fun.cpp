//#include "functions.h"
#include "fun.h"

void fun2(double proc1, double proc2)
{
    int answer = 0;
    std::random_device rseed;
    std::mt19937 rgen(rseed()*static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().
    time_since_epoch().count())); // mersenne_twister
    std::uniform_int_distribution<int> idist(1,10); // [1,10]
    std::string name;
    std::string surname;
    int quantity = 0;
    int option2 = 0;
    double vidurkisg = 0;
    double vidurkis = 0;
    std::ofstream file;
    file.open("v01AVG.txt");
    file << std::setw(15) << "Surname" << std::setw(15) << "Name" << std::setw(20) << "AVG\n";
    do
    {
        option2 = 0;
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::cout << "Enter your surname: ";
        std::cin >> surname;
        file << std::setw(15) << surname << std::setw(15) << name;
        while (option2 != 1 && option2 != 2) //checks how the user wants to enter the grades limited/unlimited
        {
            std::cout << "1. Enter an unlimited amount of grades\n2. Enter a limited amount of grades\nEnter option: ";
            option2 = Check(1, 2);
        }

        std::vector<double> Hgrade;
        int d = 100;
        int option = 0;
        if(option2 == 1) //unlimited grades
        {
            int stop = 0;
            int c = 0;
            do
            {
                //int c = 1;
                std::cout << "Enter homework nr." << c + 1 << ": ";
                d = GradeCheck();
                if(d > 0 && d <= 10)
                {
                    std::cout << "(Enter 0 if you have entered all of your grades)" << std::endl;
                    c++;
                    quantity = c;
                    Hgrade.push_back(d);
                }
                else
                {
                    if(d == 0)
                    {
                        d = 0;
                    }
                    else
                    {
                        d = 10000;
                    }
                }
            }while (stop != d);

            if(quantity == 0)
            {
                Hgrade.push_back(0);
                quantity++;
            }

        }
        else //limited grades
        {
            quantity = 0;
            while(quantity <= 0)
            {
                std::cout << "Enter the quantity of the students homework: ";
                if (!(std::cin >> quantity))
                {
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                }
                if(quantity > 0)
                {

                }
                else
                {
                    std::cout << "Invalid value. Please enter a correct value." << std::endl;
                    quantity = 0;
                }
            }

            while(option == 0)
            {
                std::cout << "1. Enter grades yourself\n2. Enter random grades\nEnter option: ";
                option = Check(1, 2);
                if(option == 1 || option == 2)
                {
                    for(int i = 0; i < quantity; i++)
                    {
                        std::cout << "Enter homework nr. " << i + 1 << ": ";
                        if(option == 1)
                        {
                            d = GradeCheck();
                            if(d > 0 && d <=10)
                            {
                                Hgrade.push_back(d);
                            }
                            else
                            {
                                i--;
                            }
                        }
                        else
                        {
                            Hgrade.push_back(idist(rgen));
                            std::cout << Hgrade[i] << std::endl;
                        }
                    }
                }
            }
        }
        option = 0;
        int number = 0;

        while(option == 0) // choose to count avg or median
        {
            std::cout << "1. Count as average\n2. Count as median\nEnter option: ";
            option = Check(1, 2);
            if(option == 1) // avg
            {
                for(int i = 0; i < quantity; i++)
                {
                    vidurkisg += Hgrade[i];
                }
                vidurkisg /= quantity;
            }
            if(option == 2) // median
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

        }

        double Egrade = 0;
        while(Egrade <=0 || Egrade > 10)
        {
            std::cout << "Enter exam grade: ";
            Egrade = GradeCheck();
        }
        vidurkis = proc1 * vidurkisg + proc2 * Egrade;
        file << std::setw(19) << vidurkis << std::endl;
        std::cout << "The grade is: " << std::setprecision(3) << vidurkis << std::endl;

        do
        {
            std::cout << "Do you want to continue?\n1. Yes\n2. No\n";
            answer = Check(1, 2);
        }while(answer != 1 && answer != 2);
    }while(answer == 1);
}
