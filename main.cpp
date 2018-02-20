#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <stdio.h>
#include <time.h>
#include <vector>
#include <fstream>
#include <algorithm>
#include <chrono>

struct Grades
{
    std::string Surname;
    std::string Name;
    double homework[5];
    double exam;
    double AVGmedian;
    double AVGaverage;
    bool operator()(const Grades& lhs, const Grades& rhs) const { lhs.Surname < rhs.Surname; }
};

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



    if(option3 == 2)
    {
        int number;
        std::ifstream fl;
        fl.open("Grades.txt");
        fl >> number;
        Grades gr[number];
        for(int i = 0; i < number; i++)
        {
            fl >> gr[i].Surname >> gr[i].Name;
            for(int j = 0; j < homeworkquantity; j++)
            {
                fl >> gr[i].homework[j];
            }
            fl >> gr[i].exam;
        }
        fl.close();
        std::sort(gr, gr+number, gr[0]);
        std::ofstream fr;
        fr.open("AVG.txt");
        fr << std::setw(15) << "Surname" << std::setw(15) << "Name" << std::setw(20) << "AVG with median" << std::setw(20) << "AVG with average\n";
        double avg[number];
        for(int i = 0; i < number; i++)
        {
            avg[i] = 0;
            for(int j = 0; j < homeworkquantity; j++)
            {
                avg[i] += gr[i].homework[j];
            }
            gr[i].AVGaverage = proc1*(avg[i]/homeworkquantity) + proc2*gr[i].exam;
        }
        double small = 0;
        double big = 0;
        for(int i = 0; i < number; i++)
        {
            for(int j = 0; j < homeworkquantity-1; j++)
            {
                for(int k = 0; k < homeworkquantity; k++)
                {
                    if(k > j)
                    {
                        if(gr[i].homework[j] > gr[i].homework[k])
                        {
                            big = gr[i].homework[j];
                            small = gr[i].homework[k];
                            gr[i].homework[j] = small;
                            gr[i].homework[k] = big;
                        }
                    }
                }
            }
            if(homeworkquantity % 2 == 0)
            {
                int no = homeworkquantity / 2;
                gr[i].AVGmedian = proc1 * ((gr[i].homework[no - 1] + gr[i].homework[no]) / 2) + proc2 * gr[i].exam;
            }
            else
            {
                int no = homeworkquantity / 2;
                gr[i].AVGmedian = proc1 * gr[i].homework[no] + proc2 * gr[i].exam;
            }
        }
        for(int i = 0; i < number; i++)
        {
            fr << std::setw(15) << gr[i].Surname << std::setw(15) << gr[i].Name << std::setw(12) << std::setprecision(3)
            << gr[i].AVGmedian << std::setw(18) << std::setprecision(3) << gr[i].AVGaverage << std::endl;
        }
        std::cout << "You will find the grades in AVG.txt file\n";
    }











    if(option3 == 1)
    {
        std::random_device rseed;
        std::mt19937 rgen(rseed()*static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().
        time_since_epoch().count())); // mersenne_twister
        std::uniform_int_distribution<int> idist(1,10); // [1,10]
        std::string name;
        std::string surname;
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::cout << "Enter your surname: ";
        std::cin >> surname;
        int quantity = 0;
        int option2 = 0;
        while (option2 == 0) //checks how the user wants to enter the grades limited/unlimited
        {
            std::cout << "1. Enter an unlimited amount of grades\n2. Enter a limited amount of grades\nEnter option: ";
            std::cin >> option2;
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
                std::cout << "(Enter 0 if you have entered all of your grades)" << std::endl;
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
        double Egrade;
        std::cout << "Enter exam grade: ";
        std::cin >> Egrade;
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
            vidurkis = proc1 * vidurkisg + proc2 * Egrade;

        }
        std::cout << std::setprecision(3) << vidurkis;
    }
    return 0;
}

