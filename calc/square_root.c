#include <stdio.h>
#include <math.h>
#include "calc.h"

double square_root(double a) {
    if (a < 0) {
        printf("Error: Square root of a negative number is not defined!\n");
        return -1;
    }
    return sqrt(a);
}
