#include "sorting.h"

//#include "struct.h"

void Random(size_t quantity, std::string k)
{
    int grade;
    std::string name;
    std::string surname;
    std::string type;
    int grade2;

    std::vector<Student> s;

    using namespace std::chrono;
    std::random_device rseed;
    std::mt19937 rgen(rseed()/1000*static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().
    time_since_epoch().count())); // mersenne_twister
    std::uniform_int_distribution<int> idist(1,10); // [1,10]
    std::ofstream file;
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        s.push_back(Student());

        name    = "vard";
        surname = "pav";

        std::ostringstream convert;
        convert << i;
        name    += convert.str();
        surname += convert.str();

        s[i].namei(name);
        s[i].surnamei(surname);

        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            s[i].Hgradei(idist(rgen));
            vidurkis += s[i].Hgradeo(j);
        }

        //s[i].type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        s[i].Egradei(idist(rgen));
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << "the function took: " << std::setprecision(5) << time_span.count()/1000 << " seconds.";
    file.open(k);
    for(size_t i = 0; i < quantity; i++)
    {
        file << s[i].nameo() << " " << s[i].surnameo() << " ";
        for(size_t j = 0; j < 5; j++)
        {
            file << s[i].Hgradeo(j) << " ";
        }
        file << s[i].Egradeo() << std::endl;
    }
    file.close();
}


void print()
{
    using namespace std::chrono;
    size_t quantity = 0;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    Random(10, "wow1.txt");
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << "wow1.txt generated in: " << time_span.count()/1000 << " seconds." << std::endl;

    t1 = high_resolution_clock::now();
    Random(100, "wow2.txt");
    t2 = high_resolution_clock::now();
    time_span = t2 - t1;
    std::cout << "wow2.txt generated in: " << time_span.count()/1000 << " seconds." << std::endl;

    t1 = high_resolution_clock::now();
    Random(1000, "wow3.txt");
    t2 = high_resolution_clock::now();
    time_span = t2 - t1;
    std::cout << "wow3.txt generated in: " << time_span.count()/1000 << " seconds." << std::endl;

    t1 = high_resolution_clock::now();
    Random(10000, "wow4.txt");
    t2 = high_resolution_clock::now();
    time_span = t2 - t1;
    std::cout << "wow4.txt generated in: " << time_span.count()/1000 << " seconds." << std::endl;

    t1 = high_resolution_clock::now();
    Random(100000, "wow5.txt");
    t2 = high_resolution_clock::now();
    time_span = t2 - t1;
    std::cout << "wow5.txt generated in: " << time_span.count()/1000 << " seconds." << std::endl;
}

