#include <stdio.h>
int main() {
    int n,i,sum = 0;
    printf("Enter number table of which you want sum: ");
    scanf("%d", &n);

    for (i = 1;i<=10;i++){
        sum = sum + (n*i);
    }
    printf("The sum of multiple of 8 is: %d", sum);
    return 0;
}