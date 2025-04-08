#include <stdio.h>

int main() {
    int n, i, isPalindrome = 1;
    scanf("%d", &n);
    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
