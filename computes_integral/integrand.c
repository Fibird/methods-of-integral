#include "methods.h"

double integrand(double x)
{
//You can modify the "func" according to your need
    double func = sqrt(x) * log(x);
    //double func = pow(x, 1.5);
    if (x <= 0.0000001)
    {
        func = 0.0;
    }

    return func;
}
