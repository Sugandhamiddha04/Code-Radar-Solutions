#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num & 0x8000000){
        printf("Set");
    }else{
        printf("Not Set");
    }
    
    return 0;
}