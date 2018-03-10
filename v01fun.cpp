
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
    std::ofstream file;
    file.open("v01AVG.txt");
    file << std::setw(15) << "Surname" << std::setw(15) << "Name" << std::setw(20) << "Status" << std::setw(20) << "AVG\n";
    do
    {
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::cout << "Enter your surname: ";
        std::cin >> surname;
        file << std::setw(15) << surname << std::setw(15) << name;
        while (option2 == 0) //checks how the user wants to enter the grades limited/unlimited
        {
            std::cout << "1. Enter an unlimited amount of grades\n2. Enter a limited amount of grades\nEnter option: ";
            std::cin >> option2;
            std::cin.ignore(1000, '\n');
            if(!(cin))
            if (option2 == 1 || option2 == 2)
            {
                break;
            }
            else
            {
                std::cout << "There is no such option. Please choose an existing option." << std::endl;
                option2 = 0;
            }
        }

        std::vector<double> Hgrade;
        int d = 0;
        int option = 0;
        if(option2 == 1) //unlimited grades
        {
            double stop = 0;
            do
            {
                int c = 1;
                std::cout << "Enter homework nr." << c << ": ";
                std::cin >> d;
                if(d != 0)
                {
                    std::cout << "(Enter 0 if you have entered all of your grades)" << std::endl;
                }
                c++;
                quantity = c;
                Hgrade.push_back(d);
            }while (stop != d);

        }
        else //limited grades
        {
            std::cout << "Enter the quantity of the students homework: ";
            std::cin >> quantity;
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
                            std::cin >> d;
                            Hgrade.push_back(d);
                        }
                        else
                        {
                            Hgrade.push_back(idist(rgen));
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
        }
        option = 0;
        double vidurkisg = 0;
        double vidurkis = 0;
        int number = 0;

        while(option == 0) // choose to count avg or median
        {
            std::cout << "1. Count as average\n2. Count as median\nEnter option: ";
            std::cin >> option;
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
            if(option != 1 && option != 2)
            {
                std::cout << "There is no such option please choose again." << std::endl;
                option = 0;
            }

        }

        if (vidurkisg >= 6.0)
        {
            std::cout << "The student is qualified for the exam" << std::endl;

            double Egrade;
            std::cout << "Enter exam grade: ";
            std::cin >> Egrade;
            vidurkis = proc1 * vidurkisg + proc2 * Egrade;
            file << std::setw(20) << "Champ" << std::setw(19) << vidurkis << std::endl;
            std::cout << "The grade is: " << std::setprecision(3) << vidurkis << std::endl;
        }
        else
        {
            std::cout << "The student is not qualified for the exam" << std::endl;
            file << std::setw(20) << "Loser\n";
        }

        do
        {
            std::cout << "Do you want to continue?\n1. Yes\n2. No\n";
            std::cin >> answer;
            if(answer != 2 && answer != 1)
            {
                std::cout << "There is no such answer" << std::endl;
            }
        }while(answer != 1 && answer != 2);
    }while(answer == 1);
}
