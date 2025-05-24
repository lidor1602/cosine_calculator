#include <math.h>
#include "Factorial.h"

double My_cos(double x, double threshold) {
    double result = 1.0;
    int sign = -1;
    double term = 1.0;
    int i;

    for (i = 2; fabs(term) >= threshold; i += 2) {
        double factorial = Factorial(i);
        term = sign * pow(x, i) / factorial;
        result += term;
        sign *= -1;
    }

    return result;
}
