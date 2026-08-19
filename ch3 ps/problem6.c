//find greatest of 4

#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Enter number 4: ");
    scanf("%d", &d);

    if(a>=b && a>=c && a>=d){
        printf("Number 1 is greatest which is %d", a);
    }
    else if(b>=a && b>=c && b>=d){
        printf("Number 2 is greatest which is %d", b);
    }
    else if(c>=a && c>=b && c>=d){
        printf("Number 3 is greatest which is %d", c);
    }
    else{
        printf("Number 4 is greatest which is %d", d);
        
    }
    return 0;
}