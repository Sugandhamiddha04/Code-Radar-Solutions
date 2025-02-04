#include <stdio.h>

int main() {
    int n, i , j, space;
    scanf("%d", &num);
    for(i=1; i<=N ; i++){
        for(space = 1;space<= N-i; space++){
            print(" ");
        }
        for( j = 1; j<= (2 * i - 1) ; j++){
            printf("*");
        }
        printf("\n")
        }
    
    return 0;
}