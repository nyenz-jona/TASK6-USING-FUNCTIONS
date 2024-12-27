#include <stdio.h>

// NO 17

float calculatetotalexpenses(int numitems, float *prices) {
    float totalexpenses = 0;
    for (int i = 0; i < numitems; i++) {
        totalexpenses += prices[i];
    }
    return totalexpenses;
}

int main() {
    int numitems = 4;
    float prices[] = {100, 50, 150, 500};
    float totalexpenses = calculatetotalexpenses(numitems, prices);

    printf("Total Expenses: %.2f\n", totalexpenses);

    return 0;
}
