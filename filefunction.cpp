#include "fun.h"
#include "functions.h"

struct Grades
{
    std::string Surname;
    std::string Name;
    double homework[5];
    double exam;
    double AVGmedian;
    double AVGaverage;
    //std::string Type;
    bool operator()(const Grades& lhs, const Grades& rhs) const { lhs.Surname < rhs.Surname; };
};

void fun(int homeworkquantity, double proc1, double proc2)
{
    int number;
    std::ifstream fl;
    fl.open("Grades.txt");
    try
    {
        if(!fl)
        {
            throw 20;
        }
    }
    catch(...)
    {
        std::cout << "There is no such file" << std::endl;
        return;
    }
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
