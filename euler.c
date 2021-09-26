#include<math.h>

int p1(int max) {
    int sum = 0;
    int i;
    for (i = max - 1; i > 0; i--) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
long unsigned int p3(long unsigned int number) {
    long unsigned int i;
    for (i = round(sqrt(number)); i > 1; i--) {
        if (number % i == 0) {
            long unsigned int x;
            for (x = round(sqrt(i)); x > 1; x--) {
                if (i % x == 0) {
                    break;
                }
            }
            if (x == 1) {
                return i;
            }
        }
    }
    return i;
}
int p5(int range) {
    int product = 1;
    int i;
    int save[range];
    int t;
    for (t = 1; t <= range; t++) {
        save[t - 1] = t;
    }
    for(t = 0; t < range; t++) {
        for (i = t + 1; i < range; i++) {
            if (save[i] % save[t] == 0) {
                save[i] /= save[t];
            }
        }
        
        product *= save[t];
    }
    return product;
}