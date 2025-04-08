#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T); // Read target sum

    // To track and avoid duplicate pairs
    int printed[N][N]; // 2D array to track printed pairs (brute-force safe)

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                int alreadyPrinted = 0;
                // Check if this pair (regardless of order) has been printed
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < N; l++) {
                        if ((arr[k] == arr[i] && arr[l] == arr[j]) ||
                            (arr[k] == arr[j] && arr[l] == arr[i])) {
                            alreadyPrinted = 1;
                            break;
                        }
                    }
                    if (alreadyPrinted) break;
                }
                if (!alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
