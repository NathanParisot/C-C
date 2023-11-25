#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// GLOBAL VARIABLES

const int MAX_NUMBER_ITEMS = 8;

int myData[MAX_NUMBER_ITEMS];

//-------------------------------------------------------------------
//-------------------------------------------------------------------
void intitalizeMyData (){
	int i;
	srand(time(0));
	for (i=0; i<MAX_NUMBER_ITEMS; i++){
		myData[i] = rand() % 100;
	}
}

//-------------------------------------------------------------------
//-------------------------------------------------------------------
void printMyData (){
	int i;
	for (i=0; i<MAX_NUMBER_ITEMS; i++) {
		cout << "+------";
	}
	cout << "+" << endl;
	
	for (i=0; i<MAX_NUMBER_ITEMS; i++) {
		cout << "|" << setw(6) << myData[i];
	}
	cout << "|" << endl;
	for (i=0; i<MAX_NUMBER_ITEMS; i++) {
		cout << "+------";
	}
		cout << "+" << endl;
}

//-------------------------------------------------------------------
//-------------------------------------------------------------------
bool isOutOfOrder(int A, int B){
	return (B<A); 
}
	
//-------------------------------------------------------------------
//-------------------------------------------------------------------
void swap(int * A, int * B){

	int temp = * A;
	* A = * B;
	* B = temp;
}

//-------------------------------------------------------------------
//-------------------------------------------------------------------
void bubbleSort(){
	int i, j;
	
	i = 0;
	for (j=MAX_NUMBER_ITEMS-1; j>i; j--) {
		if (isOutOfOrder(myData[i], myData[j])) {
			 cout << "Swapping " << myData[i] << " and " << myData[j] << endl;
			 swap(&myData[i], &myData[j]);
		}
	}
}

int main( int argc, char** argv) {
	
	int x = 10;
	int y = 6;
	
	intitalizeMyData();
	printMyData();
	bubbleSort();
	printMyData();
	
	
	return 0;
}
