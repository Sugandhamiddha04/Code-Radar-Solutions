// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the array

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxEven = -1;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }

    printf("%d\n", maxEven); 
    return 0;
}
