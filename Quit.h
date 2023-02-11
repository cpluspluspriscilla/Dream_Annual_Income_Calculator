#ifndef QUIT_H
#define QUIT_H
#include "InvalidEntry.h"
#include <iostream>

using namespace std;

class Quit
{
    public:
        Quit();

        void quit(string title);

        InvalidEntry validate;

    protected:

    private:
        int q;
        string title;

};

#endif // QUIT_H
