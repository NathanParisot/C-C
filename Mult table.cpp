// ================================================================
// MultTable.cpp - prints a multiplication table
//    Nathan Parisot - Saint Leo University - 28 September 2020 
// ================================================================
#include <iostream>
#include <iomanip>
using namespace std;

const int NUMCOLUMNS = 10;     // Number of columns in the table 
const int COLWIDTH = 5;        // Number of spaces in a column
const int NUMDIGITS = 2;       // Number of digits in a number 

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void printLine(char myChar) {
	int i,j;        // Loop Counters 
	for (i=0; i<=NUMCOLUMNS; i++) {
		for (j=0; j<COLWIDTH; j++) {
		cout<<myChar;
	}
	cout<<"+"; 
}
	cout<<endl; 
}
//---------------------------------------------------------------------------
// MAIN PROGRAM 
//---------------------------------------------------------------------------
int main(int argc, char** argv) {
	cout<<"Multiplication table" << endl << endl;
	int row, col; 
	
	printLine('=');
	cout<<setw(5)<<'*'<<"|"; 
	for (col=1;col<=NUMCOLUMNS; col++) {
		cout<<setw(5)<< col <<"|";
	}
	cout<<endl;
	printLine('='); 
	
	// Print the Data Rows 
	
	for (row=1; row<=NUMCOLUMNS; row++) {
		cout <<setw(5)<<row<<"|";
		for (col=1; col<=NUMCOLUMNS; col++) {
			cout << setw(5)<< (row*col)<< "|";
		}
		cout<< endl;
		
		if (row==10) {
			printLine('=');
			}else{
			printLine ('-');
			
		}
	}
	return 0;
}
