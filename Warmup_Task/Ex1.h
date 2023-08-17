#pragma once
#include <iostream>
using namespace std;


//Task 1

//Returns a^b, a is int
int power(int a = 1, int b = 1);
//Returns a^b, a is float
float power(float a = 1, int b = 1);
//Returns a^b, a is double
double power(double a = 1, int b = 1);


//Task 2

//Get size by reference and dynamiclly allocate an array with that size
int* createAndInput(int& size);


//Task 3

//Get rows, cols by reference and dynamiclly allocate a matrix with those sizes
int** createAndInput(int& rows, int& cols);


//printing the array and matrix
void printArray(const int* arr, const int size);
void printMatrix(int** matrix, const int rows, const int cols);


int main();