#include <stdio.h>
int main() {
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter the number you want sum upto for natural numbers: ");
    scanf("%d", &n);
    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("The sum of 10 natural number is: %d", sum);
    return 0;
}