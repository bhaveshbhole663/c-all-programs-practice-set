#include <stdio.h>

int main() {
    int n;
    int i;
    int factorial =1;
    printf("Enter a number you want factorial of: ");
    scanf("%d", &n);

    for (i =1;i<=n;i++){
        if(n==0 || n == 1){
            factorial = 1;    
        }
        else{
            factorial *= i;  
        }
    }
    printf("The factorial is %d", factorial);
    return 0;
}