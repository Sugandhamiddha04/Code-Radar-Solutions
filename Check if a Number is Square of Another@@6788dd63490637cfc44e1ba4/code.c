#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num == num*num){
        printf("Yes");
    }else{
        printf("No");
    }
   
    return 0;
}