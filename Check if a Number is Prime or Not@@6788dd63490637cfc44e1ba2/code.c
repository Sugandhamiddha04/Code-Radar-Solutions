#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime\n");
    
    
    return 0;
}
for(i = 2; i<=num /2 ; i++){
    if(num % i == 0){
        printf("Not Prime");
        return 0;
    }
}
printf("Prime");
return 0;
}