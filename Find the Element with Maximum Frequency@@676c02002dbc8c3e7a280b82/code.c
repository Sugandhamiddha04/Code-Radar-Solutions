// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int arr[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;
    int result = arr[0];

    for (i = 0; i < n; i++) {
        int count = 0;

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

      
        if (count > maxCount || (count == maxCount && arr[i] < result)) {
            maxCount = count;
            result = arr[i];
        }
    }

    printf("%d\n", result);
    return 0;
}
