#include <stdio.h>

// NO 12


float calculate_tax_amount(float price, float tax_rate) {
    return price * (tax_rate );
}

int main() {
    float price = 50;
    float tax_rate = 0.1;
    float tax_amount = calculate_tax_amount(price, tax_rate);

    printf("Tax Amount: %.2f", tax_amount);

    return 0;
}
