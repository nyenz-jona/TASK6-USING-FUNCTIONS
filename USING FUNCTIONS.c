#include <stdio.h>

// NO 9

void calculate_profit_margin(float sales_revenue, float profit, float *profit_margin) {
    *profit_margin = (profit / sales_revenue) * 100;
}

int main() {
    float sales_revenue = 30000000;
    float profit = 9000000;
    float profit_margin;

    calculate_profit_margin(sales_revenue, profit, &profit_margin);

    printf("Profit Margin: %.2f percent", profit_margin);

    return 0;
}
