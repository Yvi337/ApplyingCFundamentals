#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("The first number: ");
    scanf("%d", &num1); 

    printf("The second number: ");
    scanf("%d", &num2);

    sum = num1 + num2; 
    printf("The sum = %d\n", sum);

    return 0;
}
