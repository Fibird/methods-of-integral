#ifndef METHODS_H_INCLUDED
#define METHODS_H_INCLUDED

// This macro is the unit height of small trapezium,
// and you can modify it according to your need
#define H 0.0001

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Using trapezoidal formula to compute integral
double trapezoidal_formula(double, double);
// Using Simpson formula to compute integral
double Simpson_formula(double, double);
// Using Romberg algorithm to compute integral
double Romberg_algorithm(double, double, double);
// Integrand, you can modified it according to your need
double integrand(double);


#endif // METHODS_H_INCLUDED
