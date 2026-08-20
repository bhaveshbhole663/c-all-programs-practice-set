#include <stdio.h>

int main(){
    int n,i;
    int not_prime=0;

    printf("Enter a nummber: ");
    scanf("%d", &n);

    for(i = 2;i<n;i++){
        if(n%i == 0){
            not_prime = 1;
            break;
        }
    }
    if(not_prime){
        printf("%d is not prime", n);
    }
    else{
        printf("%d is a prime", n);
    }
}