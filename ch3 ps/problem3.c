// tax paid calculator

#include <stdio.h>

int main() {
    float income,tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if(income<250000){
        tax = 0.00;
        printf("The tax to be paid is: %.2f",tax);
    }
    

    else if(income>=250000 && income<500000){
        tax = (income*20)/100;
        printf("The tax to be paid is: %.2f",tax);
    }
    else if(income>=500000 && income<1000000){
        tax = (income*20)/100;
        printf("The tax to be paid is: %.2f",tax);
    }
    else if(income>=1000000){
        tax = (income*30)/100;
        printf("The tax to be paid is: %.2f",tax);   
    }
    else{
        printf("You entered invalid income");
    }
    return 0;






    


}