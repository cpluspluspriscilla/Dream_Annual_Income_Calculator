#include "InvalidEntry.h"
#include <iostream>

using namespace std;

InvalidEntry::InvalidEntry()
{
    //initialize variables to be used in member functions
        int entry = 0;
        int lower = 0;
        int upper = 0;
}
void InvalidEntry::Int(int &ientry, int ilower, int iupper)
{
 //while input stream is in a fail state or
        //while entry is less than lower bound or
            //while entry is greater than upper bound
    while(!(cin)|| (ientry<ilower || ientry>iupper))
        {
            //clear input stream
            cin.clear();
            //skip to newline
            cin.ignore(10000, '\n');
            //output invalid entry message
            cout << "Invalid Entry! Please enter a valid entry!" << endl;
            //get valid entry from user
            cin >> ientry;
        }

    return;
}
void InvalidEntry::Float(float &fentry, float flower, float fupper)
{
 //while input stream is in a fail state or
        //while entry is less than lower bound or
            //while entry is greater than upper bound
    while(!(cin)|| (fentry<flower || fentry>fupper))
        {
            //clear input stream
            cin.clear();
            //skip to newline
            cin.ignore(10000, '\n');
            //output invalid entry message
            cout << "Invalid Entry! Please enter a valid entry!" << endl;
            //get valid entry from user
            cin >> fentry;
        }

    return;
}
void InvalidEntry::Long(long &lentry, long llower, long lupper)
{
 //while input stream is in a fail state or
        //while entry is less than lower bound or
            //while entry is greater than upper bound
    while(!(cin)|| (lentry<llower || lentry>lupper))
        {
            //clear input stream
            cin.clear();
            //skip to newline
            cin.ignore(10000, '\n');
            //output invalid entry message
            cout << "Invalid Entry! Please enter a valid entry!" << endl;
            //get valid entry from user
            cin >> lentry;
        }

    return;
}
