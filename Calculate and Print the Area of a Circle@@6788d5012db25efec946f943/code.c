#include <stdio.h>

int main() {
    float rad;
    float pi= 3.14;
    scanf("%f", &rad);
    float area = pi * rad * rad;
    printf("Area: %.2f",area);
   
    return 0;
}