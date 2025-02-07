#include <stdio.h>

int main() {
    int N;
    sacnf("%d", &N);
    for( int i = 1 ; i <= N ; i++){
        for( int j = 1 ; j <= N - i ; j++){
            printf(" ");
        }
        for( int j = o ; j<=i ; j++){
            printf("%c " , 'A'+j);
        }
        printf("\n");
    }
    
    return 0;
}