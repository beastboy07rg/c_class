#include <stdio.h>

int smallest_divisor(int num) {
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            return i;
        }
    }
    return num;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int smallest_div1 = smallest_divisor(num1);
    int smallest_div2 = smallest_divisor(num2);
    
    int gcd_result = gcd(num1, num2);
    
    printf("Smallest divisor of %d is: %d\n", num1, smallest_div1);
    printf("Smallest divisor of %d is: %d\n", num2, smallest_div2);
    printf("Greatest common divisor of %d and %d is: %d\n", num1, num2, gcd_result);
    
    return 0;
}

