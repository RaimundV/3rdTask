cmake_minimum_required(VERSION 3.9)
project(Darbas2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O3 -Ofast")

add_executable(Darbas2
        filefunction.cpp
        fun.h
        GradeCheck.cpp
        IntegerCheck.cpp
        main.cpp
        mainwithvectors.cpp
        smallFunctions.cpp
		struct.h
        sorting.h
        v01fun.cpp
        v04.cpp
        v05.cpp
        v05Deque.cpp
        v05List.cpp
        v05Vector.cpp v1.cpp functions.h containerV.cpp containerD.cpp containerL.cpp functionsD.h functionsL.h)
