// check character is lowercase or not

#include <stdio.h>
#include <ctype.h>

int main() {
    char character;
    printf("Enter alphabet: ");
    scanf("%c", &character);

    if(character == tolower(character) ){
        printf("Your character is lower case");
    }
    else{
        printf("Your character is upper case");
    }
    return 0;


}