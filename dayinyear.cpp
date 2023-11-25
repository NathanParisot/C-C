//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//  dayInYear.cpp - Computing the day in the year (factoring leap year)
//    Nathan Parisot - Saint Leo University - 10/9/2
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <iostream>
#include <iomanip>
using namespace std;


//------------------------------------------------------------------------------
// isLeapYear determines if year is or is not a leap year.
//------------------------------------------------------------------------------
bool isLeapYear(int inYear) {
    bool retVal;

    retVal = ((inYear % 400 == 0)) || ((inYear % 4 == 0) && (inYear % 100 != 0));
    return retVal;

}
//------------------------------------------------------------------------------
// Determines what month is inputed and retruns the months value.
//------------------------------------------------------------------------------
int daysInMonth(int inYear, int inMonth) {
    int retVal = 31;
    if ( (inMonth==4) || (inMonth==6) || (inMonth==9) || (inMonth==11) ) {
        retVal = 30;
    }
    if (inMonth==2) {
        if(isLeapYear(inYear)) {
            retVal = 29;
        } else {
            retVal = 28;
        }
    }
    return retVal;
}

bool isValidDate(int inYear, int inMonth, int inDay) {
    bool retVal = true;
    if (inYear<=1582) retVal = false;
    if ((inMonth <1) || (inMonth >12)) retVal = false;
    if ((inDay < 1) || (inDay>daysInMonth(inYear,inMonth))) retVal = false;
    return retVal;
}

int daysIntoYear(int inYear, int inMonth, int inDay)  {
    int retVal = inDay;
    int i;
    for (i=1; i < inMonth; i++) {
        retVal = retVal + daysInMonth(inYear, i);
        cout << i << "  " << daysInMonth(inYear, i) << " "<< retVal << endl;
    }
    return retVal;
}

int main(int argc, char **argv) {

    int Year, Month, Day;
    bool isDateValid;

    cout << "Please enter the year ?";
    cin >> Year;

    cout << "Please enter the month ?";
    cin >> Month;

    cout << "Please enter the day ?";
    cin >> Day;

    cout << "You entered (YYYY-MM-DD) "<< Year << "-" << Month << "-" << Day
         << endl;
    isDateValid = isValidDate(Year, Month, Day);
    if  (!isValidDate) {
        cout<<"This is not a valid date." << endl;
    } else {
        cout<<"Days into year = " <<daysIntoYear(Year, Month, Day) << endl;
    }
    return 0;

}

