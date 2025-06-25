#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;
    int sum = 0;

    printf("Enter the number of Fibonacci elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of first %d Fibonacci numbers is: %d\n", n, sum);

    return 0;
}

