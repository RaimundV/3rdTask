//
// Created by 123 on 2018-05-17.
//
#include "fun.h"
#include "functions.h"
#include "Catch.h"


TEST_CASE("Is he a Winner", "[IsWinner]"){
    Student s;
    std::string win = "Winner";
    s.typei(win);
    REQUIRE(IsWinner(s) == true);
    std::string lose = "Loser";
    s.typei(lose);
    REQUIRE(IsWinner(s) == true);
}
TEST_CASE("Is he a Winner2", "[IsWinner]"){
    Student s;
    std::string win = "Winner";
    s.typei(win);
    REQUIRE(IsWinner(s) == true);
}
