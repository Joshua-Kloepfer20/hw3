#include "euler.h"
#include<stdio.h>

int main() {
    int max = 1000;
    long unsigned int number = 600851475143;
    int range = 20;
    printf("Sum of the multiples of 3 and 5 below %d: %d\n", max, p1(max));
    printf("the largest prime factor of %ld is %ld\n", number, p3(number));
    printf("the smallest number that can be divided by each of the numbers from 1 to %d is %d\n", range, p5(range));
    return 0;
}