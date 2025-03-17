#include<stdio.h>
int isprime(int num){
    if(num < 2) return 0;
    if(num == 2) return 1;
    if (num %2 == 0 ) return 0;
    for ( int i = 3; i * i <= num ; i += 2){
        if(num % i == 0) return 0;
    }
    return 1;
}
int main(){
    int s;
    scanf("%d", &s);

    while(s--){
        int num;
        scanf("%d",&num);
        printf("%d", isprime(num));

    }
    return 0;
}