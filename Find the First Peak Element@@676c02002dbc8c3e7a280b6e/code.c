
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int peak = -1; 

    for (int i = 0; i < N; i++) {
        
        if (i == 0) {
            if (N == 1 || arr[i] > arr[i + 1]) {
                peak = arr[i];
                break;
            }
        } else if (i == N - 1) {
            if (arr[i] > arr[i - 1]) {
                peak = arr[i];
                break;
            }
        } else {
        
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                peak = arr[i];
                break;
            }
        }
    }

    printf("%d\n", peak); 
    return 0;
}
