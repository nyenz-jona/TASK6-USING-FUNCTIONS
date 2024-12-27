#include <stdio.h>

//NO 2

void calculate_sale_price(float original_price, float discount_percentage, float *sale_price) {
    *sale_price = original_price - (original_price * discount_percentage / 100);
}
void calculate_salary_after_tax(float original_salary, float tax_rate, float *final_salary) {
    *final_salary = original_salary - (original_salary * tax_rate / 100);
}

int main() {
    float original_salary = 5000000.0;
    float tax_rate = 15.0;
    float final_salary;

    calculate_salary_after_tax(original_salary, tax_rate, &final_salary);

    printf("Salary After Tax: UGX %.2f\n", final_salary);

    return 0;
}
