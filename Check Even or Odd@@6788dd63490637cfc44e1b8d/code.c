#include <stdio.h>

int main() {
    int num;
    printf("Enter a single integer: ");
    scanf("%d",num);
    if(num%2 == 0){
        printf("Even");

    }else{
        printf("Odd");
    }
    
    return 0;
}