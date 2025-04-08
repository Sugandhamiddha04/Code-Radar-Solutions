// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, temp;
    scanf("%d", &n);
    int arr[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    int smallest = arr[0];
    int secondSmallest = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    printf("%d\n", secondSmallest);
    return 0;
}
