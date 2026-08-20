#include <stdio.h>

int main() {
    int i = 1,sum = 0;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    do{
        sum = sum + i;
        i++;
    } while (i<=n);
    
    printf("The sum of natural numbers is %d",sum);
    return 0;
}