// ====================================================================
// number.cpp - computes some propreties of a number entered by the user 
// 		Nathan Parisot - 18 September 2020 - Saint Leo Univeristy 
// ====================================================================
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int userInput;
	int digitalRoot; 
	
	// Get the number from the user & report it back 
	
	cout << "Please enter a whole number ?> ";
	cin >> userInput;
	cout <<" Your entered "<< userInput << endl;
	
	// Classify the number as zero, positive, or negative 
	
	if (userInput ==0) {
		cout <<"The value is zero." <<endl;
	} else {
		if (userInput>0) {
			cout <<"The value is positive." <<endl;
		} else { 
			cout <<"The value is negative." <<endl;
		}
	}
	
	// Classify the value as even or odd
	
	if (userInput%2==0) {
		cout << "The value is even."<<endl; 
	} else {
		cout << "The value is odd."<<endl; 
	}
	
	// Compute the digital root 
	
	digitalRoot = userInput;
	
	if (digitalRoot <0) {
		digitalRoot = digitalRoot * -1; 
	}
	digitalRoot = digitalRoot % 9;
	
	if (digitalRoot==0) {
		digitalRoot = 9;
	}
	
	cout << "The digiral root is " << digitalRoot << endl; 
	
	return 0;
}
