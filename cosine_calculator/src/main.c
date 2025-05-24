#include <stdio.h>
#include <math.h>
#include "Cos_function.h"
#include "Factorial.h"
#include "My_cos.h"

#define DEFAULT_THRESHOLD 0.000001

double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

int main() {
    double angle_D, angle_R, taylor_result;

    printf("Enter the angle in degrees to calculate its cosine:\n");
    if (scanf("%lf", &angle_D) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    angle_R = degrees_to_radians(angle_D);
    taylor_result = My_cos(angle_R, DEFAULT_THRESHOLD);

    printf("Taylor series approximation of cos(%.6lf° / %.6lf rad) with threshold %.6lf: %.6lf\n",
           angle_D, angle_R, DEFAULT_THRESHOLD, taylor_result);
    printf("cos() from math.h: %.6lf\n", Cos_function(angle_R));

    return 0;
}
