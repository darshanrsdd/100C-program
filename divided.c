#include <stdio.h>
int findRemainder(int a, int b) {
    return a % b;
}

int main() {
    int dividend, divisor, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        remainder = findRemainder(dividend, divisor);
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}
