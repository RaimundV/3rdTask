cmake_minimum_required(VERSION 3.9)
project(Darbas2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O3 -Ofast")

add_executable(Darbas2
        fun.h
        main.cpp
        sorting.h
        v04.cpp
        v05.cpp
        v05Deque.cpp
        v05List.cpp
        v05Vector.cpp
		v1.cpp
		functions.h
		containerV.cpp
		containerD.cpp
		containerL.cpp
		"unit test.cpp"
		Catch.h)
