#ifndef __Calculation__
#define __Calculation__

#include <string>
#include <iostream>

class Calculation
{
    private:
        float U1rms = 0;
        float R1 = 0;
        float R2 = 0;

        struct calcresult
        {
            bool status;
            float U1m;
            float U2;
            float Kgainins;
            float Kgaincom;
            float Rfbinvert;
            float Rfbnoninvert;
        };

    public:
        bool setU1rms(std::string input);
        bool setR1(std::string input);
        bool setR2(std::string input);
        bool checkinput(std::string input);
        calcresult rutine();
};


#endif