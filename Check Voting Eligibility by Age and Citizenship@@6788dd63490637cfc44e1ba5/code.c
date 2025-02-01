#include <stdio.h>

int main() {
    int age,num;
    scanf("%d %d", &age,&num);
    if(age>=18 && num == 1){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
   
    return 0;
}