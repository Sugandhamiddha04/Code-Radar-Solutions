// Your code here...
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[100];
    int count = 0;
    int maxRight = arr[n - 1];
    leaders[count++] = maxRight;

   
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
