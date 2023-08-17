#include "Ex1.h"

/*
Task 1: 
	A function called power that accepts two arguments a and b and returns a to the power of b must be loaded.
	The function should support the case of argument - a - being: an integer, a floating number, a double number.
	In any case it is argument - b - must be a positive integer. The default value of b should be 1 in all cases.
*/
int power(int a, int b) {
	int aPowB = a;
	for (int i = 0; i < b - 1; i++)
		aPowB = aPowB * a;
	return aPowB;
}

float power(float a, int b) {
	float aPowB = a;
	for (int i = 0; i < b - 1; i++)
		aPowB = aPowB * a;
	return aPowB;
}

double power(double a, int b) {
	double aPowB = a;
	for (int i = 0; i < b - 1; i++)
		aPowB = aPowB * a;
	return aPowB;
}


/*
Task 2:
	Build a function - int * createAndInput(int & size).
	The function produces an array whose size is determined by the user in the function (the value is put into size), also the function receives the element of the array from the user.
	The function will return the assigned array by value (it must be released at the end of using main) and return by reference its size (argument to the function).
*/
int* createAndInput(int& size) {
	cout << "Enter the size of the desired array: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter the element of index " << i << "in the array: ";
		cin >> arr[i];
	}
	return arr;
}


/*
Task 2:
	Build a function - int ** createAndInput(int & rows,int & cols).
	The function a rectangular matrix whose dimensions are determined by the user (the values are put into rows, cols), also the function receives the element of the matrix from the user.
	The function will return by value the assigned matrix (it must be released at the end of use-main) and return by reference its size (arguments to the function).
*/
int** createAndInput(int& rows, int& cols) {
	cout << "Enter the number of rows in the matrix: ";
	cin >> rows;
	cout << "Enter the number of columns in the matrix: ";
	cin >> cols;
	//Dynamically alocate memorey for rowsXcols matrix
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
		matrix[i] = new int[cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Enter the element in row " << i << " and column " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	return matrix;
}

//printing the array 
void printArray(const int* arr, const int size) {
	cout << "**Input array**" << endl << "[";
	for (int i = 0; i < size; i++)
		if (i < size - 1)
			cout << arr[i] << ", ";
		else
			cout << arr[i];
	cout << "]" << endl << endl;
}

//printing the matrix
void printMatrix(int** matrix, const int rows, const int cols) {
	cout << "**Input matrix**" << endl;
	for (int i = 0; i < rows; i++) {
		cout << "[";
		for (int j = 0; j < cols; j++)
			if (j < cols - 1)
				cout << matrix[i][j] << ", ";
			else
				cout << matrix[i][j];
		cout << "]" << endl;
	}
}