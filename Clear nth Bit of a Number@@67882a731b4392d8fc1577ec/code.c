#include <stdio.h>

int main() {
    int num,n;
    scanf("%d %d", &num,&n);
    printf("%d", 1 & ~(1 << n));
   
    return 0;
}