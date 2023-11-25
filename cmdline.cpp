//===================================================================================
// ALphabet.cpp - creates a cipher alphabet using the Atbash Cipher
// 	if no command line argument is given or a key word cipher
//  if a keyword is passed as a command line argument.
// Maurice Ferguson - Saint Leo University - 2 November 2020
//===================================================================================
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

//-----------------------------------------------------------------------
// Global variables
//-----------------------------------------------------------------------

const char plainTextAlphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
 'U', 'V', 'W', 'X', 'Y', 'Z'};

const int NUM_LETTERS = 26;

char cipherTextAlphabet[NUM_LETTERS];
int numInCipherAlphabet = 0;

//------------------------------------------------------------------------
//------------------------------------------------------------------------

void atBash() {
	int i;
	for (i=0; i<NUM_LETTERS; i++) {
		cipherTextAlphabet[i] = plainTextAlphabet[NUM_LETTERS-1-i];
	}
	numInCipherAlphabet = NUM_LETTERS;	
}

//------------------------------------------------------------------------
//------------------------------------------------------------------------
void printAlphabets() {
	int i;
	cout<<setw(5)<<"Plain"<<setw(7)<<"Cipher"<<endl;
	cout<<setw(5)<<"-----"<<setw(7)<<"-----"<<endl;
	for (i=0; i<NUM_LETTERS; i++) {
		cout<<setw(7)<<left<<plainTextAlphabet[i]<<setw(7)
		<<left<<cipherTextAlphabet[i]<<endl;
		}
		cout<<setw(7)<<"====="<<setw(7)<<"====="<<endl;
}

//------------------------------------------------------------------------
//------------------------------------------------------------------------
bool isInPlainTextAlphabet(char letterToTest) {
	return ((letterToTest>='A') && (letterToTest<='Z'));
}
//------------------------------------------------------------------------
//------------------------------------------------------------------------
bool isNotInCipherTextAlphabet(char letterToTest) {
	bool retVal = true;
	for (int i=0; i<numInCipherAlphabet; i++) {
		if (letterToTest==cipherTextAlphabet[i]) {
			retVal = false; 
		}
	}
	return retVal;
}
//------------------------------------------------------------------------
//------------------------------------------------------------------------
void keyWord(string myKeyWord) {
	
	//clear cipherTextAlphabet[]
	numInCipherAlphabet = 0;
	int i;
	char letterToTest;
	
	// copy unique letters from myKeyWord into cipherTextAlphabet[]
	for (i=0; i< myKeyWord.length(); i++) {
		letterToTest=char(toupper(myKeyWord[i]));
		if (isInPlainTextAlphabet(letterToTest) &&
		 isNotInCipherTextAlphabet(letterToTest)) {
		 cipherTextAlphabet[numInCipherAlphabet] = letterToTest;
		 numInCipherAlphabet++;
		 /* cout<<" Inserting Letter " << letterToTest <<endl; */	
		 }
	}
	// copy letters in PlainTextAlphabet[] but not in
	// cipherTextAlphabet[] into cipherTextAlphabet[]
		for (i=0; i<NUM_LETTERS; i++) {
			letterToTest=plainTextAlphabet[i];
			if (isNotInCipherTextAlphabet(letterToTest)) {
		 	cipherTextAlphabet[numInCipherAlphabet] = letterToTest;
		 	numInCipherAlphabet++;
	
		}
	}
}

// ------------------------------------------------------------------------------
// ------------------------------------------------------------------------------
int main(int argc, char** argv) {
	if (argc<2) {
		atBash();
		cout<<"Atbash"<<endl<<endl;
		printAlphabets();
} else {
	
		keyWord(argv[1]);
		cout<<"keyword '"<<argv[1]<<"'"<<endl<<endl;
		printAlphabets();
}
	return 0;
	}
	
