
/*bool compareByType(const Student &a, const Student &b)
{
    return a.type < b.type;
}*/
#include "sorting.h"
#include "struct.h"

void SortingL(size_t quantity, std::string k, std::string w)
{
    std::list<Student> st;
    Student s;
    int grade;
    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try
    {
        if(file){}
        else {throw 20;}
    }
    catch(...)
    {
        std::cout<< "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        file >> s.name >> s.surname;
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s.Hgrade.push_back(grade);
            vidurkis += s.Hgrade[j];
            //std::cout << s.Hgrade[j] << std::endl;
        }

        s.type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        file >> s.Egrade;
        st.push_back(s);
        s = {};
    }
    st.sort(compareByType);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(std::list<Student>::iterator it = st.begin(); it !=st.end(); ++it)
    {
        std::string n, s;
        n = (it)->name;
        s = (it)->surname;
            input << n << " " << s << " ";
            for(size_t j = 0; j < 5; j++)
            {
                int grade = (it)->Hgrade[j];
                input << grade << " ";
            }
            int e = (it)->Egrade;
            std::string word = (it)->type;

            input << e << " ";
            input << word << std::endl;
    }
    input.close();
}
