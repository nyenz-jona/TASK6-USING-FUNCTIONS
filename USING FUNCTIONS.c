#include <stdio.h>

// NO 6

void calculatesimpleinterest(float principal, float annualinterestrate, int years, float *simpleinterest) {
    *simpleinterest = (principal * annualinterestrate * years) / 100;
}

int main() {
    float principal = 2000000;
    float annualinterestrate = 6;
    int years = 3;
    float simpleinterest;

    calculatesimpleinterest(principal, annualinterestrate, years, &simpleinterest);

    printf("Simple Interest: UGX %.2f\n", simpleinterest);

    return 0;
}
