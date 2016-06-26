#include <stdio.h>
#include <stdlib.h>
#include "methods.h"

int main()
{
    double a, b;       // The interval of the integral
    double value_trap, value_simp;
    printf("Please enter the upper limit: ");
    scanf("%lf", &a);
    printf("Please enter the lower limit: ");
    scanf("%lf", &b);

    value_trap = trapezoidal_formula(a, b);
    value_simp = Simpson_formula(a, b);
    printf("The definite integral of this function in [%d, %d] is:\n", (int)a, (int)b);

    printf("Using trapezoidal formula: %lf\n", value_trap);
    printf("Using Simpson formula: %lf\n", value_simp);

    return 0;
}
