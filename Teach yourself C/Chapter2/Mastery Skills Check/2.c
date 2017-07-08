#include<stdio.h>

int main (void){

    int room_no, i, len, wid, total;

    printf("Enter the number of rooms in the house: ");
    scanf("%d", &room_no);

    for(i=1; i<=room_no; i++){
        printf("Enter length of room number %d: ", i);
        scanf("%d", &len);
        printf("Enter width of room number %d: ", i);
        scanf("%d", &wid);

        total=total+(len*wid);
    }

    printf("The area of the house is %d", total);

}

//Coded by Rafed
