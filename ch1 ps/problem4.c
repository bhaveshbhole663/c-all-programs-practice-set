#include <stdio.h>

int main() {
    float SI,r;
    int p,t;
    
    printf("Enter principle amount: ");
    scanf("%d",&p);
    printf("Enter Rate of interest: ");
    scanf("%f",&r);
    printf("Enter Time Period: ");
    scanf("%d",&t);
    SI = (p*r*t)/100;
    printf("\nThe Simple interest is: %.2f",SI);
    return 0;
}