#include "methods.h"

double Romberg_algorithm(double a, double b, double precision)
{
    double h = b - a;
    double *T;
    double temp_sum = 0.0;
    double x, c, d;     // c is coefficient in some formula, d is denominator which will be used
    int n = 0, k = 0, i = 0;
    //double precision;

    T = (double*) malloc(2 * sizeof(double));
    if (T == NULL)
    {
        printf("Allocation failed!");
        exit(EXIT_FAILURE);
    }
    // First value of T
    T[0] = (h / 2) * (integrand(a) + integrand(b));


    while (1)
    {
        k++;
        h = h / 2;

        temp_sum = 0.0;     // Must be cleared to 0 before every loop
        for (i = 0; i < pow(2, k); i++)
        {
            c = 2 * i + 1;                      // Coefficients of a
            d = pow(2, k + 1);        // Denominators
            x = (c * a + (d - c) * b) / d;
            temp_sum += integrand(x);
        }

        //  Compute the value of trapezium
        T[k] = 0.5 * T[k - 1] + (h / 2) * temp_sum;

        // Compute the value of acceleration
        for (n = 1; n <= k; n++)
        {
            T[k] = (pow(4, n) / (pow(4, n) - 1)) * T[k - 1] - 1 / (pow(4, n) - 1) * T[k];
        }
        if (T[k] - T[k - 1] <= precision)
        {
            break;
        }
        realloc(T, 2 + k);
    }

    return T[k];
}
