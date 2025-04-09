// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[100], i, j;

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    int minDiff = arr[1] - arr[0];
    if (minDiff < 0) minDiff = -minDiff;
    int a = arr[0], b = arr[1];

    for (i = 1; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < 0) diff = -diff;

        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    printf("%d %d\n", a, b);

    return 0;
}
