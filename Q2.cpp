#include <stdio.h>

int isArmstrong(int n) {
    if (n == 0) {
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}
