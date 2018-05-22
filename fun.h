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
