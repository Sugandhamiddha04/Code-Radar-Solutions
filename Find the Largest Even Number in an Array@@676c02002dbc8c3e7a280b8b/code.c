#include <stdio.h>

int main() {
    int N, num, maxEven = -1;
    scanf("%d", &N); // Read the number of elements

    for (int i = 0; i < N; i++) {
        scanf("%d", &num); // Read each number
        if (num % 2 == 0) {
            if (maxEven == -1 || num > maxEven) {
                maxEven = num;
            }
        }
    }

    printf("%d\n", maxEven);
    return 0;
}
