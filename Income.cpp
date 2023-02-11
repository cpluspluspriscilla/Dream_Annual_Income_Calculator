#include "Income.h"
#include "Quit.h"
#include <iomanip>

Income::Income()
{
    int income = 0;
    int freq = 0;

    int menu = 0;
    float pay = 0;
}
void Income::Welcome()
{
    //welcome user
    cout << "*************************************************" << endl;
    cout << "Welcome to the Dream Annual Income Calculator!" << endl;
    cout << "*************************************************" << endl << endl;

    //explain program to user
    cout << "*******************************************" << endl;
    cout << " With this program you can calculate how " << endl;
    cout << " much money you must earn periodically in " << endl;
    cout << " order to attain your dream annual income" << endl;
    cout << "*******************************************" << endl<< endl;

    //display menu options
    Menu();

}
void Income::Menu()
{
    while (menu != 2){
    //output menu options
    cout << "*********************MENU**********************" << endl;
    cout << " Calculate Dream Annual Income . . . press 1" << endl;
    cout << " Quit . . . . . . . . . . . . . . .  press 2" << endl;
    cout << "***********************************************" << endl;


    //get input from user
    cin >> menu;
    validate.Int(menu, 1, 2); //validate user input is between 1 and 2
    cout << endl;

    if (menu==1) //if user entry is 1
        GetIncome(); // proceed to set calorie goal

    if (menu==2) //if user entry is 2
        {quit.quit("Dream Annual Income Calculator"); //quit program
          menu = 1;  }
    }

    return;

}
void Income::GetIncome()
{

    cout << "***************************************************" << endl;
    cout << "Please note that this calculator cannot calculate" << endl;
    cout << "a salary beyond 1 billion dollars." << endl;
    cout << "Please enter your dream annual income: ";
    cin >> income;
    cout << "***********************************************" << endl;
    cout << endl;

    validate.Long(income, 0, 1000000000.00);

    GetFreq();

    return;
}
void Income::GetFreq()
{
    cout << "***********************************************" << endl;
    cout << "How often will you get paid?" << endl;
    cout << "Daily . . . . . . . . . . . . . press 1" << endl;
    cout << "Weekly . . . . . . . . . . . . .press 2" << endl;
    cout << "Biweekly . . . . . . . . . . . .press 3" << endl;
    cout << "Semimonthly . . . . . . . . . . press 4" << endl;
    cout << "Monthly . . . . . . . . . . . . press 5" << endl;
    cout << "Quarterly . . . . . . . . . . . press 6" << endl;
    cout << "Yearly . . . . . . . . . . . . .press 7" << endl;

    cin >> freq;

    cout << "***********************************************" << endl;
    cout << endl;

    validate.Float(freq, 1, 7);
    PrintPay();

    return;

}
void Income::SetFreq()
{
    switch(static_cast<int>(freq))
    {
    case 1: freq = 365.0;
    frequency = " each day.";
    break;

    case 2: freq = 52.0;
    frequency = " each week.";
    break;

    case 3: freq = 26.0;
    frequency = " every 2 weeks.";
    break;

    case 4: freq = 24.0;
    frequency = " twice a month.";
    break;

    case 5: freq = 12.0;
    frequency = " each month.";
    break;

    case 6: freq = 4.0;
    frequency = " each quarter.";
    break;

    case 7: freq = 1.0;
    frequency = " each year.";
    break;
    }
    return;
}
void Income::CalcPay()
{
    pay = (income/freq);

    return;

}
void Income::PrintPay()
{
    SetFreq();
    CalcPay();

    cout << "***********************************************" << endl;
    cout << "In order to earn an annual income of " << income << endl;
    cout << "you will need to earn " << pay << frequency << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    return;

}
