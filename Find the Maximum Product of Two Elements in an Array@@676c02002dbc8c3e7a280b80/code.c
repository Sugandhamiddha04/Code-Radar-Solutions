// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int maxProduct = arr[0] * arr[1];

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    printf("%d\n", maxProduct); 
    return 0;
}
