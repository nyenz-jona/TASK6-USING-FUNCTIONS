#include <stdio.h>

// NO 14

 float calculateprofit (float sellingprice, float buyingprice){
 return sellingprice - buyingprice;
 }

 int main(){

  float sellingprice = 100000;
  float buyingprice = 80000;
  float profit = calculateprofit (sellingprice, buyingprice);

 if (profit>0) {
    printf("profit");
 }

 else if (profit<0) {
    printf("loss");
 }
    return 0;
}
