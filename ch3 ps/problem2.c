#include <stdio.h>

int main() {
    int physics,chemistry,mathematics,total;
    float percentage;
    printf("Enter marks of physics: ");
    scanf("%d",&physics);
    printf("Enter marks of chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter marks of mathematics: ");
    scanf("%d",&mathematics);
    total = physics+chemistry+mathematics;
    percentage = (total/300.0)*100;
    if(percentage>=40 && physics>=33 & chemistry>=33 && mathematics>=33){
        printf("Passed\n");
        printf("Percentage are: %.2f", percentage);
    }
    else{
        printf("Failed\n");
        printf("Percentage are: %.2f", percentage);

    }

    return 0;
}