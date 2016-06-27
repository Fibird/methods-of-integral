#include "methods.h"

double integrand(double x)
{
//You can modify the "func" according to your need
    if (x <= 0.0000001)
    {
        //x = 0.000000001;
    }
    //double func = sqrt(x) * log(x);
    double func = pow(x, 1.5);

    return func;
}
