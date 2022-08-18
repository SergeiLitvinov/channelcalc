#include "Calculation.hpp"
#include <string>
// #include <cstring>
#include <iostream>
#include <math.h>




bool Calculation::checkinput(std::string input)
{
    if (input.length() == 0)
    {
        return false;
    }

    /* if (std::isdigit(input))
    {
        return false;
    } */

    return true;
};

bool Calculation::setU1rms(std::string input)
{
    /* wxTextCtrl *TextString = (wxTextCtrl *) event.GetEventObject(); */
    if (!checkinput(input))
    {
        U1rms = 0;
        return false;
    }
    
    U1rms = std::stof(input);
    
    return true;
};

bool Calculation::setR1(std::string input)
{
    if (!checkinput(input))
    {
        R1 = 0;
        return false;
    }
    
    R1 = std::stof(input);
    return true;
};

bool Calculation::setR2(std::string input)
{
    if (!checkinput(input))
    {
        R2 = 0;
        return false;
    }

    R2 = std::stof(input);
    return true;
};


Calculation::calcresult Calculation::rutine()
{
    calcresult result = {false, 0, 0, 0, 0};
    result.U1m = U1rms*sqrt(2);
    result.U2 = result.U1m*(R2/(R1+R2));
    result.Ky = 2.048/(sqrt(2)*result.U2);
    result.Roc = 100000/result.Ky - 1;
    return result;
};