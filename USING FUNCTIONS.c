#include <stdio.h>

// NO 16

 int calculateyears(float initialinvestment, float rate) {
    return (int)ceil(log(2) / log(1 + (rate)));
}

int main() {
    float initialinvestment = 1000;
    float rate = 0.07;
    int years= calculateyears(initialinvestment, rate);

    printf("Years to Double: %d years\n", years);

    return 0;

}
