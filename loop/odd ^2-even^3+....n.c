#include <stdio.h>

int main() {
    int n;
    long long sum = 0; // Initialize the sum to 0

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // If i is odd, add i^2 to the sum
            sum += i * i;
        } else {
            // If i is even, subtract i^3 from the sum
            sum -= i * i * i;
        }
    }

    printf("The result of the series is: %lld\n", sum);

    return 0;
}
