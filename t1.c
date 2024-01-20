#include <stdio.h>

int main() {
    int n, m;
    scanf("%i %i", &n, &m);

    // Алгоритм Евклида
    while (n != m) {
        if (n > m) {
            n -= m;
        } else {
            m -= n;
        }
    }

    // 1 если взаимно простые, 0 иначе
    printf("%i", (n == 1));
    return 0;
}