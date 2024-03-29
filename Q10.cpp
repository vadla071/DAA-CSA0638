#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    int len = strlen(str);
    if (len <= 1) {
        return 1;
    }
    if (str[0] == str[len - 1]) {
        return isPalindrome(str + 1) && isPalindrome(str + len - 2);
    }
    return 0;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}

