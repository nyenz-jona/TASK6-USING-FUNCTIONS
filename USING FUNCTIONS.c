#include <stdio.h>

// NO 19
float calculatetotaloverduefee (int days, float dailyoverdue){
return dailyoverdue * days;
}

int main(){
int days = 6;
float dailyoverdue = 100;

float totaloverdue = calculatetotaloverduefee(days, dailyoverdue);

printf ("Total daily over due fees; %0.2f",totaloverdue);
    return 0;
}
