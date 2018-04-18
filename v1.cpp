//
// Created by 123 on 2018-03-31.
//


#include "functions.h"

void ContainerPerformanceCheck(int option)
{
    if (option == 5) {
        std::cout << "\nVector Container PCheck 1:\n" << std::endl;

        ContainerV(10, "wow1.txt", "ContainerV1.txt");

        ContainerV(100, "wow2.txt", "ContainerV2.txt");

        ContainerV(1000, "wow3.txt", "ContainerV3.txt");

        ContainerV(10000, "wow4.txt", "ContainerV4.txt");

        ContainerV(100000, "wow5.txt", "ContainerV5.txt");

        std::cout << "\nVector Container PCheck 2:\n" << std::endl;

        ContainerV2(10, "wow1.txt", "Container2V1.txt");

        ContainerV2(100, "wow2.txt", "Container2V2.txt");

        ContainerV2(1000, "wow3.txt", "Container2V3.txt");

        ContainerV2(10000, "wow4.txt", "Container2V4.txt");

        ContainerV2(100000, "wow5.txt", "Container2V5.txt");

        std::cout << "\nDeque Container PCheck 1:\n" << std::endl;

        ContainerD(10, "wow1.txt", "ContainerD1.txt");

        ContainerD(100, "wow2.txt", "ContainerD2.txt");

        ContainerD(1000, "wow3.txt", "ContainerD3.txt");

        ContainerD(10000, "wow4.txt", "ContainerD4.txt");

        ContainerD(100000, "wow5.txt", "ContainerD5.txt");

        std::cout << "\nDeque Container PCheck 2:\n" << std::endl;

        ContainerD2(10, "wow1.txt", "Container2D1.txt");

        ContainerD2(100, "wow2.txt", "Container2D2.txt");

        ContainerD2(1000, "wow3.txt", "Container2D3.txt");

        ContainerD2(10000, "wow4.txt", "Container2D4.txt");

        ContainerD2(100000, "wow5.txt", "Container2D5.txt");

        std::cout << "\nList Container PCheck 1:\n" << std::endl;

        ContainerL(10, "wow1.txt", "ContainerL1.txt");

        ContainerL(100, "wow2.txt", "ContainerL2.txt");

        ContainerL(1000, "wow3.txt", "ContainerL3.txt");

        ContainerL(10000, "wow4.txt", "ContainerL4.txt");

        ContainerL(100000, "wow5.txt", "ContainerL5.txt");

        std::cout << "\nList Container PCheck 2:\n" << std::endl;

        ContainerL2(10, "wow1.txt", "Container2L1.txt");

        ContainerL2(100, "wow2.txt", "Container2L2.txt");

        ContainerL2(1000, "wow3.txt", "Container2L3.txt");

        ContainerL2(10000, "wow4.txt", "Container2L4.txt");

        ContainerL2(100000, "wow5.txt", "Container2L5.txt");
    }
    else
    {
        std::cout << "\nVector Container PCheck 2 without algorithms:\n" << std::endl;
        ContainerV2Unoptimized(10, "wow1.txt", "Container2V1nb.txt");
        ContainerV2Unoptimized(100, "wow2.txt", "Container2V2nb.txt");
        ContainerV2Unoptimized(1000, "wow3.txt", "Container2V3nb.txt");
        ContainerV2Unoptimized(10000, "wow4.txt", "Container2V4nb.txt");
        //ContainerV2Unoptimized(100000, "wow5.txt", "Container2V5nb.txt");

        std::cout << "\nDeque Container PCheck 2 without algorithms:\n" << std::endl;
        ContainerD2Unoptimized(10, "wow1.txt", "Container2D1nb.txt");
        ContainerD2Unoptimized(100, "wow2.txt", "Container2D2nb.txt");
        ContainerD2Unoptimized(1000, "wow3.txt", "Container2D3nb.txt");
        ContainerD2Unoptimized(10000, "wow4.txt", "Container2D4nb.txt");
        //ContainerD2Unoptimized(100000, "wow5.txt", "Container2D5nb.txt");

        std::cout << "\nList Container PCheck 2 without algorithms:\n" << std::endl;
        ContainerL2Unoptimized(10, "wow1.txt", "Container2L1nb.txt");
        ContainerL2Unoptimized(100, "wow2.txt", "Container2L2nb.txt");
        ContainerL2Unoptimized(1000, "wow3.txt", "Container2L3nb.txt");
        ContainerL2Unoptimized(10000, "wow4.txt", "Container2L4nb.txt");
        //ContainerL2Unoptimized(100000, "wow5.txt", "Container2L5nb.txt");
    }
}

