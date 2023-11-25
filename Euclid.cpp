//===================================================================
//Euclid.cpp -- Nathan Parisot - Saint Leo University 
//	finds the GDC of two integers using Euclid's Algorithm 
//===================================================================

#include <iostream>
#include <iomanip>
using namespace std; 

//--------------------------------------------------------------------
//--------------------------------------------------------------------
int Euclid(int Dividend, int Divisor) {
	int remainder;
	if (Dividend < Divisor) {
		return Euclid(Divisor, Dividend);
	}
	remainder = Dividend % Divisor; 
	
	if (remainder==0) {
		return Divisor; 
	} else {
		// cout<<Dividend<<"%"<<Divisor<<"="remainder<<endl; 
		return Euclid(Divisor,remainder); 
	}
	
	return -1; 
		// We should never reach this code 
}

int main(int argc, char** argv) {
	
	int i,j; 			// Loop Counters 
	string bar = "--------";
	
	int testValue[] = {12, 17, 42, 49, 72, 97, 102, 235, 315, 1023};
						// Test Data 
	
	// print a header for report
	
	cout << setw(10)<<"i"<<setw(10)<<"j"<<setw(10)<<"gcd(i,j)"<<endl;
	cout << setw(10)<<bar<<setw(10)<<bar<<setw(10)<<bar<<endl;
	
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			
				cout<<setw(10)<< testValue[i]<<
					setw(10)<< testValue[j]<<
					setw(10)<<
					Euclid(testValue[i], testValue[j] )<< endl; 
			} 
		
	}	
	// Print a footer for report 
	
	cout << setw(10)<<bar<<setw(10)<<bar<<setw(10)<<bar<<endl; 

	return 0;
}
