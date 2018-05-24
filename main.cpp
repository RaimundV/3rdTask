
#include "fun.h"
#define CATCH_CONFIG_RUNNER
#include "Catch.h"
int main(int argc, char* argv[])
{
    std::cout << "Generate student files" << std::endl;
    print();
    std::cout << "Check performance" << std::endl;
    PerformanceCheck();
    std::cout << "check container performance" << std::endl;
    ContainerPerformanceCheck(5); // Change to 6 so the programme runs the containers without algorithms

    Catch::Session session;

    int returnCode = session.applyCommandLine( argc, argv );
    if( returnCode != 0 )
        return returnCode;

    return session.run();
}

