#include "Ex1.h"

int main() {

	//Task 1
	int b = 3;
	int aInt = 5;
	float aFloat = 5.5;
	double aDouble = 4.5;
	cout << "b = " << b << endl << "aInt = " << aInt << endl << "aFloat = " << aFloat << endl << "aDouble = " << aDouble;
	cout << endl << endl << "aInt^b = " << power(aInt, b) << endl;
	cout << "aFloat^b = " << power(aFloat, b) << endl;
	cout << "aDouble^b = " << power(aDouble, b) << endl;
	cout << "aInt^bDeafult = " << power(aInt) << endl << endl;

    //Calling power without b
	int inputAInt;
	cout << "Please enter an integer for a: ";
	cin >> inputAInt;
	cout << "a^b = " << power(inputAInt) << endl << endl;


	//Task 2
	int size = 1;
	int* arr = createAndInput(size);
	printArray(arr, size);
	delete[] arr;


	//Task 3
	int rows = 1;
	int cols = 1;
	int** matrix = createAndInput(rows, cols);
	printMatrix(matrix, rows, cols);


	//Deleting dynamiclly allocated memorey
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;

	return 0;
}