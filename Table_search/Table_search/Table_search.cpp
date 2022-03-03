/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: This program will find out which is the biggest and smallest number in that table
Made in Visual Studio
*/

#include<iostream>

using namespace std;


int const N = 10; //constant 10
int t[N] = { 42, 15, 2, 76, 23, 99, 7, 26, 129, 55 }; //table with 10 assorted numbers
int b, s; // integer named "b" and "s"


int main()
{

	b = 0; //initializing the "b" variable
	s = 0; //initializing the "s" variable

	for (int i = 0; i < N; i++) { // Here it says that as long as the counter "i" is greater than zero and less than 10, it will keep the function looping active.

		if (t[i] > t[b]) b = i; // Here is for the index to find and record the largest number in the table
		if (t[i] < t[s]) s = i; // Here is for the index to find and record the smallest number in the table
	}

	cout << "\n The biggest element           = " << t[b]; // It will show the largest number in the table on the screen
	cout << "\n The smallest element           = " << t[s]; // It will show the smallest number in the table on the screen

}
