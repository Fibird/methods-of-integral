#include "methods.h"

double trapezoidal_formula(double a, double b)
{
    double I1 = 0.0, I2 = 0.0, T = 0.0;
    int n = 0;
    int i = 0.0;

    /*This is the number of small trapezium*/
    n = (b - a) / H;

    for (i = 1; i <= n; i++)
    {
        I1 = a + (double)(i - 1) * H;
        I2 = a + (double)i * H;
        T += (integrand(I1) + integrand(I2)) * (H / 2);
    }

    //printf("The definite integral of this function in [%d, %d] is: %lf\n",
           //(int)a, (int)b, T);
    return T;
}
