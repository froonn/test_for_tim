#include <stdio.h>

int fib(int a) {
    if (a == 0) {
        return 0;
    } else if (a == 1) {
        return 1;
    } else {
        return fib(a - 1) + fib(a - 2);
    }
}

int main() {

    int n, sum = 0;

    scanf("%i", &n);

    for (int i = 0; fib(i) < n; i += 1) {
        sum += fib(i);
    }

    printf("%i", sum);

    return 0;
}