#include "methods.h"

double Simpson_formula(double a, double b)
{
    double I1 = 1.0;
    double I2 = 0.0;
    double S = 0.0;
    int n = 0;
    int i = 0;

    /*This is the number of small trapezium*/
    n = (b - a) / H;

    for (i = 1; i <= n; i++)
    {
        I1 = a + (double)(i - 1) * H;
        I2 = a + (double)i * H;
        S += (H / 6) * (integrand(I1) + 4 * integrand((I1 + I2) / 2) + integrand(I2));
    }

    return S;
}
