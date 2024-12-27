#include <stdio.h>

// NO 11

float calculate_discounted_price(float price, float discount_percentage) {
    float discount_amount = price * discount_percentage;
    return price - discount_amount;
}

int main() {
    float price = 100;
    float discount_percentage = 0.1;
    float discounted_price = calculate_discounted_price(price, discount_percentage);

    printf("Discounted Price: %.2f", discounted_price);

    return 0;
}
