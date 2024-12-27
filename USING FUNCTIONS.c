#include <stdio.h>

//NO 3


void calculategrossprofit(double salesrevenue, double cogs, double grossprofit) {
    grossprofit = salesrevenue - cogs;
}

int main() {
    double salesrevenue = 15000000;
    double cogs = 9000000;
    double grossprofit;

    calculategrossprofit(salesrevenue, cogs, grossprofit);

    printf("Gross Profit: UGX %.2lf", grossprofit);

    return 0;
}
