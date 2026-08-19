// leap year or not calculator

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0){
        printf("This is a leap year");  
    }
    else{
        printf("Normal year");
    }
    return 0;
}