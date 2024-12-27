#include <stdio.h>

// NO 7
#include <stdio.h>

void calculatebreakevenpoint(double fixedcosts, double variablecostsperunit, double sellingpriceperunit, double *breakevenpoint) {
    *breakevenpoint = fixedcosts / (sellingpriceperunit - variablecostsperunit);
}

int main() {
    double fixedcosts = 10000000;
    double variablecostsperunit = 50000;
    double sellingpriceperunit = 100000;
    double breakevenpoint;

    calculatebreakevenpoint(fixedcosts, variablecostsperunit, sellingpriceperunit, &breakevenpoint);

    printf("Break-even Point: %.2f units\n", breakevenpoint);

    return 0;
}
