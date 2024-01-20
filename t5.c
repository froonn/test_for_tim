#include <stdio.h>

int main() {

    int n, i = 2, sum = 0;

    scanf("%i", &n);

    while (n >= i) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
        i += 1;
    }

    printf("%i", sum);

    return 0;
}