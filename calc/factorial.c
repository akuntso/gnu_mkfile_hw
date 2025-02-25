#include <stdio.h>
#include "calc.h"

long long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of a negative number is not defined!\n");
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
