//----------------------------------------------------------------
// Exercis.cpp - Compute Fitness Sats
// 	Daria Pacheco - Saint Leo University - 12 Feburary 2021
//----------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string customerName;
	int customerAge, customerWeight, customerHeight;
	double maxHeartRate, aerobicRate, BMI;
	
	//Part 1. Enter Customer Data
	
	cout<< "Please enter the customer name ?> ";
	getline(cin, customerName);
	cout<< "Please enter the customer's age in years ?> ";
	cin >> customerAge;
	cout<< "Please enter the customer's height in inches ?> ";
	cin >> customerHeight;
	cout<< "Please enter the customer's weight in pounds ?> ";
	cin >> customerWeight;
	
	// Echo Input
	cout<<"Report for: " << customerName << endl;
	
	cout << setw(10) << " " << setw(8) << left << "Age"
		<< setw(3) << " : " << setw(9) << customerAge <<endl;
		
	cout << setw(10) << " " << setw(8) << left << "Height"
		<< setw(3) << " : " << setw(9) << customerHeight <<endl;
		
	cout << setw(10) << " " << setw(8) << left << "Weight"
		<< setw(3) << " : " << setw(9) << customerWeight <<endl;
		
	// Part 3. Compute Fitness Stats
	
	maxHeartRate = 220.0 - double(customerAge);
	aerobicRate = 70.0 + (0.7 * (maxHeartRate - 70.0));
	BMI = 703.0 * double(customerWeight) / (double(customerHeight)*double(customerHeight));
	
	// Part 4. Output Stats
	
	cout << setw(10) << " " << setw(8) << left << "Max. Heart Rate"
		<< setw(3) << " : " << left << setw(9) <<setprecision(1) << fixed << maxHeartRate <<endl;
		
	cout << setw(10) << " " << setw(8) << left << "Aerobic Rate"
		<< setw(3) << " : " << left << setw(9) << setprecision(1) << fixed << aerobicRate <<endl;
	
	cout << setw(10) << " " << setw(8) << left << "BMI"
		<< setw(3) << " : " << left << setw(9) << setprecision(1) << fixed << BMI <<endl;
		
	cout << "End of Report";
	return 0;
}