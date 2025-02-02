#include <stdio.h>

int main() {
    char name[100];
    int age;
    char str[100];
    scanf("%s %d %[^\n]s",&name,&age,&str);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n", str);
    
    return 0;
}