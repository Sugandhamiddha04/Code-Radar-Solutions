#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];
    int present[1001] = {0}; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] <= 1000) {
            present[arr[i]] = 1; 
        }
    }

    
    for (int i = 1; i <= 1000; i++) {
        if (present[i] == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
