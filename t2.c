#include <stdio.h>

int main() {

    int n, k, i = 0;

    scanf("%i %i", &n, &k);

    do {
        n /= k;
        i += 1;
    } while (n != 0);

    printf("%i", i);

    return 0;
}