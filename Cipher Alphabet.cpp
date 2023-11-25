//-------------------------------------------------------------------
// Alphabet.cpp --
// 		Daria Pacheco - Saint Leo University - 8 March 2021
//-------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------

const char plainTextAlphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y', 'Z' };
	
const int NUM_LETTERS = 26;

char cipherTextAlphabet[NUM_LETTERS];
int numInCipherTextAlphabet = 0;

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------

void atBash() {
	int i;
	for (i = 0; i < NUM_LETTERS; i++) {
		cipherTextAlphabet[i] = plainTextAlphabet[NUM_LETTERS - 1 - i];
	}
	numInCipherTextAlphabet = NUM_LETTERS;
}

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------

bool isInPlainTextAlphabet(char x) {
	return((x >= 'A') && (x <= 'Z'));
}

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------

bool isNotInCipherTextAlphabet(char x) {
	bool retVal = true;
	int i;
	
	for (i = 0; i < numInCipherTextAlphabet; i++) {
		if (x == cipherTextAlphabet[i]) {
			retVal = false;
		}
	}
	return retVal;
}

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------

void printAlphabets() {
	int i;
	cout << setw(7) << "Plain" << setw(7) << "Cipher" << endl;
	cout << setw(7) << "------" << setw(7) << "------" << endl;
	for (i = 0; i < NUM_LETTERS; i++) {
		
		cout << setw(7) << plainTextAlphabet [i];
		cout << setw(7) << cipherTextAlphabet[i] << endl;
	}
	cout << setw(7) << "------" << setw(7) << "------" << endl;
}

//-------------------------------------------------------------------

int main(int argc, char** argv) {
	if (argc < 2) {
		cout << "AtBash Cipher" << endl;
		cout << " " << endl;
		atBash();
		printAlphabets();
	} else {
		cout << "Keyword Cipher" << endl;
	}
	
	return 0;
}
