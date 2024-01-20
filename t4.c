#include <stdio.h>
#include <stdbool.h>

bool check(int a) {
    for (int i = 2; i < a; i += 1) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n, sum = 0;
    scanf("%i", &n);

    for (int i = 2; i < n; i += 1) {
        if (check(i) == true) {
            sum += i;
        }
    }

    printf("%i", sum);

    return 0;

}