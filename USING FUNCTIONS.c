#include <stdio.h>

// NO 8

void calculate_flat_interest(float investment_amount, float time, float rate, float *flat_interest) {
    *flat_interest = investment_amount * time * rate;
}

int main() {
    float investment_amount = 1000000;
    float time = 2;
    float rate = 0.04;
    float flat_interest;

    calculate_flat_interest(investment_amount, time, rate, &flat_interest);

    printf("Flat Interest: UGX %.2f\n", flat_interest);

    return 0;
}
