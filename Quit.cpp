#include "Quit.h"
#include "InvalidEntry.h"
#include <iomanip>

Quit::Quit()
{
    //ctor
}
void Quit::quit(string title)
{
        //OUTPUT PROMPT TO ABORT QUIT PROCESS
        cout << "***************************************************" << endl;
        cout << setw(27) <<  "Leaving already?" << endl;
        cout << "Yes . . . . . . . . . . . . press 1" << endl;
        cout << "No  . . . . . . . . . . . . press 2" << endl;
        cout << "***************************************************" << endl;

        //GET USER'S INPUT AND STORE IN quit.
        cin >> q;

        validate.Int(q, 1, 2); //validate if entry is between 1 and 2

        if (q == 1) //if quit is 1, output concluding message to user
        {cout << "***************************************************" << endl;

        //OUTPUT GOODBYE MESSAGE TO USER
        cout << "Thank you for using the " << title << "!" << endl;
        cout << "Come back soon!" << endl;
        cout << "***************************************************" << endl;}

        if (q == 2) //IF quit IS EQUALS 2
        return; //RETURN CONTROL TO CALLING FUNCTION.

        //TERMINATE PROGRAM
        exit(0);
        abort();


}
