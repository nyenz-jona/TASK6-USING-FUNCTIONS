#include <stdio.h>

// NO 15

 float calculatediscountprice (float originalprice, float discount){
 return originalprice - (originalprice * discount );
 }

 int main(){

  float originalprice = 100000;
  float discount = 0.08;
  float discountprice = calculatediscountprice (originalprice, discount);

 if (discount>0.2) {
    printf("Discount price; %.2f",discountprice);

 }
    return 0;
}
