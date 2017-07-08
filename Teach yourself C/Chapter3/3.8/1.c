#include<stdio.h>

int main(){

    int total, i, j;

    total=0;

    do{
        printf("Enter the number (0 to stop): ");
        scanf("%d", &i);
        printf("Enter number again: ");
        scanf("%d", &j);

        if(i!=j){
            printf("Mismatch \n");
            continue;
        }
        total+=i;
    } while(i);

    return 0;

}

//Coded by Rafed.
