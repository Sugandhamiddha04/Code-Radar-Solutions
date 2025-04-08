// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n); // size of array

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &target); 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d\n", i); 
            return 0;
        }
    }

   
    printf("-1\n");
    return 0;
}
