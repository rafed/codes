#include<stdio.h>

int main(){

    int no;

    printf("Enter the number of proverb you want to print (1-5): ");
    scanf("%d", &no);

    if(no==1) printf("Two wrongs don't make a right.");
    if(no==2) printf("The pen is mightier than the sword.");
    if(no==3) printf("When in Rome, do as the Romans.");
    if(no==4) printf("The squeaky wheel gets the grease.");
    if(no==5) printf("No man is an island.");
    else printf("This proverb doesn't exist!");

    return 0;

}

//Coded by Rafed.
