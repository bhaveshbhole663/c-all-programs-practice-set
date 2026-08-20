// table of 10 in reverse

#include <stdio.h>

int main(){
    int n = 10,i = 1;
    while(i<=10){
        printf("%d X %d = %d\n",n,11-i,(11-i)*n);
        i++;
    }
    return 0;
}