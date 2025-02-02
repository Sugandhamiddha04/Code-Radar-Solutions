#include <stdio.h>

int main() {
    char name;
    int age;
    char str[100];
    scanf("%c %d %c",&name,&age,&str);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n", str);
    
    return 0;
}