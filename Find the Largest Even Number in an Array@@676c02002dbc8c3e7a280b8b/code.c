#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num, maxEven = -1;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num); 
        if (num % 2 == 0 && num > maxEven) {
            maxEven = num; 
        }
    }

    printf("%d\n", maxEven); 
    return 0;
}
