#include <stdio.h>

// NO 13

float calculatetotalsalary (float basesalary, float bonus){
return basesalary + (basesalary * bonus);
}
 int main() {

     float basesalary = 100000;
     float bonus = 0.08;
     float totalsalary = calculatetotalsalary (basesalary, bonus);

     printf("Total salary;UGX %0.2f",totalsalary);



    return 0;
}
