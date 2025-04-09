#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);

    int arr[100], i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t); 

    
    int printed[100][2];
    int printedCount = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                int x = arr[i];
                int y = arr[j];
                if (x > y) {
                    int temp = x;
                    x = y;
                    y = temp;
                }

               
                int found = 0;
                for (int k = 0; k < printedCount; k++) {
                    if (printed[k][0] == x && printed[k][1] == y) {
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("%d %d\n", x, y);
                    printed[printedCount][0] = x;
                    printed[printedCount][1] = y;
                    printedCount++;
                }
            }
        }
    }

    return 0;
}
