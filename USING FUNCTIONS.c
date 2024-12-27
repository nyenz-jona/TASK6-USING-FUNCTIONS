#include <stdio.h>

//NO 4


void  calculateroi(float investment, float profit, float *roi) {
    *roi = (profit / investment) * 100;
}

int main() {
    float investment = 10000000;
    float profit = 12000000;
    float roi;

    calculateroi(investment, profit, &roi);

    printf("Return on Investment (ROI): %.2f percent", roi);

    return 0;
}
