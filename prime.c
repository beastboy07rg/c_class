#include <stdio.h>

int main() {
    int i, num, p = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            p++;
        }
    }

    if (p == 2) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}

