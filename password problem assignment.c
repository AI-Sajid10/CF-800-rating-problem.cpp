#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[100];
    int hasUppercase = 0, hasDigit = 0, hasSpecial = 0;
    int length;
    printf("Enter the password: ");
    scanf("%s", password);
    length = strlen(password);
    if (length < 8) {
        printf("The password is invalid.\n");
        return 0;
    }
    if (strcmp(password, "12345678") == 0) {
        printf("The password is invalid.\n");
        return 0;
    }
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUppercase = 1; // Contains uppercase letter
        } else if (isdigit(password[i])) {
            hasDigit = 1; // Contains a digit
        } else if (!isalnum(password[i])) {
            hasSpecial = 1; // Contains a special character
        }
    }
    if (hasUppercase && hasDigit && hasSpecial) {
        printf("The password is valid.\n");
    } else {
        printf("The password is invalid.\n");
    }

    return 0;
}

