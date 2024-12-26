#include <stdio.h>

//NO 1


void totalsaleprice(double originalprice, double discount, double saleprice) {
    saleprice = originalprice - (originalprice * discount);
}

int main() {
    double originalprice = 200000.0;
    double discount = 0.1;
   double saleprice;

   totalsaleprice( originalprice, discount, saleprice);

    printf("Sale Price: UGX %.2f\n", saleprice);

    return 0;
}
