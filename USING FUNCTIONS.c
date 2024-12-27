#include <stdio.h>

// NO 20

float calculatemaximumdiscount(float discount,float originalprice){

if (discount <= 0.5) {
    return originalprice * discount;
}
if (discount > 0.5){
return originalprice * 0.5;
}
}

int main(){

float discout = 0.8;
float originalprice = 100000;

float maxdiscount = calculatemaximumdiscount (discout, originalprice);


printf("Max Discount is; %0.2f",maxdiscount );



    return 0;
}
