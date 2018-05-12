#ifndef FUN_H
#define FUN_H

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <stdio.h>
#include <ctime>
#include <vector>
#include <fstream>
#include <algorithm>
#include <chrono>
/**
 * gets students' information from file Grades.txt
 * @param homeworkquantity the amount of homework grades
 * @param proc1             how much % of the total grade is homework worth
 * @param proc2             how much % of the total grade is exam worth
 */
void fun(int homeworkquantity, double proc1, double proc2);
/**
 * lets the user input students' grades with different options
 * @param proc1             how much % of the total grade is homework worth
 * @param proc2             how much % of the total grade is exam worth
 */
void fun2(double proc1, double proc2);
/**
 * checks if the numbers are within the range and if they arent letters/symbols
 * @param a minimum value
 * @param b maximum value
 * @return option3 returns chosen number
 */
int  Check(int a, int b);
/**
 * checks if the number is a good value for a grade
 * @return option3 return the grade
 */
int  GradeCheck();
/**
 * calls out functions to check container input to fails
 */
void PerformanceCheck();
/**
 * Checks container sorting performance
 * @param option option decides which method to use
 */
void ContainerPerformanceCheck(int option);
/**
 * Function used to call out Random function and count the time
 */
void print();

#endif
