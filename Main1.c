#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = num1 / num2;
    float remainer = num1 % num2;
    printf("Sum: %10d\n", sum);
    printf("Difference: %10d\n", difference);
    printf("Product: %10d\n", product);
    printf("Quotient: %10f\n", quotient);
    printf("Remainer: %10f\n", remainer);
    return 0;
}




