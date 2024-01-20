#include <stdio.h>

int main() {
    int n, mew = 0;
    scanf("%i", &n);

    while(n != 0) {
        mew = mew * 10 + n % 10;
        n /= 10;
    }

    printf("%i", mew);


    return 0;
}
