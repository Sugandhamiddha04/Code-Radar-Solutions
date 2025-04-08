#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N); // Read number of elements

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &T); // Read target sum

    // Check all unique pairs
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                // Print the pair
                printf("%d %d\n", arr[i], arr[j]);
                // Avoid printing the same pair again
                break;
            }
        }
    }

    return 0;
}
