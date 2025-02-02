#include <stdio.h>

int main() {
    int num,position;
    scanf("%d %d", &num , &position);
    printf("%d",num >> position & 1);
   
    return 0;
}