#ifndef INCOME_H
#define INCOME_H
#include <iostream>
#include "InvalidEntry.h"
#include "Quit.h"

using namespace std;

class Income
{
    public:
        Income();
        InvalidEntry validate;
        Quit quit;

        void Welcome();
        void Menu();
        void GetIncome();
        void GetFreq();
        void SetFreq();
        void CalcPay();
        void PrintPay();

    protected:

    private:
        long income;
        float freq;
        string frequency;
        int menu;
        float pay;
};

#endif // INCOME_H
