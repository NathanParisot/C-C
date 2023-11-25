// ===============================================================
//Triangle.cpp - This program computes the area of a triangle
// Nathan Parisot - 4 September 2020
// ===============================================================
#include <iostream>
using namespace std;
int main(int argc, char **argv) {

// Variable Declarations 

double Base; // Base of the triangle
double Height; // Height of the triangle
double Area; // Area of the triangle

// Input Data

cout << "Please enter the Base of the triangle ?" <<endl;
cin >> Base;
cout << "Please enter the Height of the triangle ?" <<endl;
cin >> Height; 

// Compute the Area

Area = Base * Height / 2.0; 

// Output the Results

cout << "The Area of the triangle is " << Area << endl;
return 0;
}

