#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 251
int cardano (int a, int b, int c, int n) {
    int sqc = pow(c, 1/2);
    if ((pow((a + b*sqc), 1/3) + pow((a - b*sqc), 1/3) == 1) && a + b + c <= n) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    printf("%d\n", cardano(2, 1, 5, 1000));
}