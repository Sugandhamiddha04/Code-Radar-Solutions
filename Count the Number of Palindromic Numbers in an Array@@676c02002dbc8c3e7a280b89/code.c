// Your code here...
#include <stdio.h>


int is_palindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (is_palindrome(arr[i])) {
            count++; 
        }
    }

    printf("%d\n", count); 
    return 0;
}
