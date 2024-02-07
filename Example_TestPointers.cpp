// Example_TestPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	//cout << &x << endl;

	int* y = &x; // y is a pointer that will store the address of x 

//	cout << y << endl;

	//cout << *y << endl;

	*y += 10;

	//cout << x << endl;

	const int size = 10;
	int array1[size];// static definition 

	int size2;

	cout << "Please enter the size of the array:\n";
	cin >> size2;

	int* array2 = new int[size2]; // pointer to an int or an array of ints

	for (int i = 0; i < size2; i++)
		array2[i] = 1;

	for (int i = 0; i < size2; i++)
		cout << array2[i] << endl;


	// int* copy = array2;// shallow copy 

	// Deep copy 
	int* copy = new int[size2];
	for (int i = 0; i < size2; i++)
		copy[i] = array2[i];



	delete[] array2;// deallocate old memory 

	array2 = new int[size2*2];






   
}

