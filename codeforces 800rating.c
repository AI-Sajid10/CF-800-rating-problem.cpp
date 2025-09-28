#include <stdio.h>

#define MAX_N 200005
int main() {
    int t, n, i, num;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int freq[MAX_N] = {0};
        int found = -1;

        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            freq[num]++;

            if (freq[num] == 3) {
                found = num;
            }
        }

        printf("%d\n", found);
    }

    return 0;
}
