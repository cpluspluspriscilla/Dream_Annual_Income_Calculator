#ifndef INVALIDENTRY_H
#define INVALIDENTRY_H


class InvalidEntry
{
    public:
        InvalidEntry();

        void Int(int &ientry, int ilower, int iupper);

        void Float(float &fentry, float flower, float fupper);

        void Long(long &lentry, long llower, long lupper);

    protected:

    private:
        int ientry;
        int iupper;
        int ilower;

        float fentry;
        float fupper;
        float flower;
};

#endif // INVALIDENTRY_H
