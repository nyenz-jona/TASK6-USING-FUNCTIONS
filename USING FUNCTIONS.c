#include <stdio.h>

// NO 10


void calculate_straight_line_depreciation(float cost, float residual_value, int useful_life, float *annual_depreciation) {
    *annual_depreciation = (cost - residual_value) / useful_life;
}

int main() {
    float cost = 10000000;
    float residual_value = 2000000;
    int useful_life = 5;
    float annual_depreciation;

    calculate_straight_line_depreciation(cost, residual_value, useful_life, &annual_depreciation);

    printf("Annual Depreciation: UGX %.2f", annual_depreciation);

    return 0;
}
