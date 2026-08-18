#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number you want to check if it is divisible by 97: ");
    scanf("%d",&a);
    b = a%97;
    printf("The reminder when a is divided by 97 is %d",b);
    return 0;

}