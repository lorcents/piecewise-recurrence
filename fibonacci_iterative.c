// fibonacci_iterative.c

#include <stdio.h>

int fibonacciIterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int prev3 = 0;
    int prev2 = 1;
    int prev1 = 2;
    int result = 0;

    for (int i = 3; i <= n; i++) {
        result = prev3 + prev2;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = result;
    }

    return result;
}

int main() {
    int n = 10;
    int result = fibonacciIterative(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
