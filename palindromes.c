#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// 655

int reverse (int num) {
    int nu = num;
    int digits = (int)log10(nu);
    while (digits != 0) {
        int first = (int)(nu / pow(10, digits));
        int last = nu % 10;
        printf("%d %d\n", first, last);
        printf("%d\n", digits);
        if (first != last)
            return 0;
        if (digits == 1)
            return 1;
        digits--;
        nu /= 10;
    }
    printf("hi\n");
    return 1;
}

int main () {
    // long n;
    // int i = 0;
    // for (n = 109; n < pow(10, 5); n += 109) {
    //     if (n % 10 == 0)
    //         continue;
    //     if(reverse(n) == 1)
    //         i++;
    // }
    // printf("%d\n", i);
    printf("%d\n", reverse(545));
}