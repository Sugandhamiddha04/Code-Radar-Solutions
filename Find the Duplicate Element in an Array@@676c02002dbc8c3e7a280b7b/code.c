// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int freq[N]; 

    
    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }

   
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) {
            printf("%d\n", arr[i]); 
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0; 
}
