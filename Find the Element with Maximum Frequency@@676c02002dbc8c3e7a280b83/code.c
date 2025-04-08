// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100], freq[100];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }

   
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] == -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count;
        }
    }

    int maxFreq = 0, result;
    for (int i = 0; i < n; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = arr[i];
        } else if (freq[i] == maxFreq && arr[i] < result) {
            result = arr[i]; 
        }
    }

    printf("%d\n", result);
    return 0;
}
