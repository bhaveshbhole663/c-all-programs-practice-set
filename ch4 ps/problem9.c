#include <stdio.h>

int main() {
    int i = 1;
    int n,factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    while(i<=n){
        if(n==0 || n==1){
            factorial = 1;
        }
        else{
            factorial *= i;
        }
        i++;
        
    }
    printf("The factorial of number is: %d", factorial);
    return 0;

}