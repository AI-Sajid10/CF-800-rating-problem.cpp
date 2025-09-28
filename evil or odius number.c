#include <stdio.h>
int main() {
    int n, i, num, count, temp;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        count = 0;
        temp = num;
        while (temp > 0) {
            if (temp % 2 == 1) {
                count++;
            }
            temp /= 2;
        }
        if (count % 2 == 0) {
            printf("%d is an Evil number.\n", num);
        } else {
            printf("%d is an Odious number.\n", num);
        }
    }

    return 0;
}

