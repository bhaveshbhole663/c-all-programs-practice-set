#include <stdio.h>

int main(){
    int i =2;
    int n;
    int not_prime = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(i<n){
        if(n%i==0){
            not_prime = 1;
            break;
            i++;
        }
    }
    if(not_prime){
        printf("%d is not prime", n);
    }
    else{
        printf("%d is a prime");
    }
    return 0;

}