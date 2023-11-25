//-------------------------------------------------------------------------------------------
// MoveLoop.cpp - simulates movement on a 2D grid
//      Daria Pacheco - Saint Leo University - 26 February 2021
//-------------------------------------------------------------------

#include <iostream>
#include <cctype>
using namespace std;

//-------------------------------------------------------------------
// void printLocation(int x, inty) -- report user location
//-------------------------------------------------------------------

void printLocation (int x, int y) {
    cout << "You are at location ("<<x<<", "<<y<<")." <<endl;
}

//-------------------------------------------------------------------
// void printHelp() -- print out a list of valid commands 
//-------------------------------------------------------------------
void printHelp() {
    cout<<"Valid Commands: ?=Help; E=East; N=North; ";
    cout<<"S=South; Q=Quit" <<endl;
}

//-------------------------------------------------------------------
// bool isValidCommand(char inLetter) -- return if inLetter
//      is a valid command code
//-------------------------------------------------------------------
bool isValidCommand(char inLetter ) {
    return ((inLetter=='Q') || (inLetter=='N') || (inLetter=='S')
        || (inLetter=='E') || (inLetter=='W') || (inLetter=='?'));
}

//-------------------------------------------------------------------
// char getCommand() --
//      command code, and give an error message and help when they
//      fail to do so. Return the valid command code.
//-------------------------------------------------------------------
char getCommand() {
    char userInput ='*';
    
    while (!(isValidCommand(userInput))) {
            
        cout<<"Please enter a command ?>";
        cin >> userInput;
        userInput = char(toupper(userInput));
    
        if (isValidCommand(userInput)) {
        cout<<"You entered the command '"<<userInput<<"'."<<endl;
    } else {
        cout<<"Invalid command '"<<userInput<<"'."<<endl;
        printHelp();
        }
    }
    
    return userInput;
}

//---------------------------------------------------------------
// MAIN PROGRAM
//---------------------------------------------------------------
int main () {
    char userInput = '*';
    int myX = 0;
    int myY = 0;
        
    while (userInput!= 'Q') {
        printLocation(myX, myY);
        cin >> userInput;
        cout<<"You entered the command '"<<userInput<<"'."<<endl;
        
        switch (userInput) {
            case 'N' : myY = myY + 1; break;
            case 'S' : myY = myY - 1; break;
            case 'E' : myX = myX + 1; break;
            case 'W' : myY = myY - 1; break;
            case '?' : printHelp(); break;
            default : break;
    }
    }
        
    return 0;
}