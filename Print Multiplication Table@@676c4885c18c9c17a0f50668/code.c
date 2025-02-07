#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for(int i = 1; i <= 10 ; i++){
        printf("%d x %d = %d\n",N , i, N*i);

    }
   
    return 0;
}