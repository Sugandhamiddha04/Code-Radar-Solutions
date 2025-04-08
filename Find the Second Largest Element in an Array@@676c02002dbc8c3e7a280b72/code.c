// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int second = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != max) {
            if (second == -1 || arr[i] > second)
                second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}
