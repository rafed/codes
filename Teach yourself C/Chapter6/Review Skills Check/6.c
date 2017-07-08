#include<stdio.h>

void main(){

    char phone[][2][40]={
        "Maruf", "01676674259",
        "Rafia", "01685229426",
        "Ammu", "01949755494",
        "Rafed", "01846249480",
        "", ""
    };

    char name[20];
    int i;

    printf("Enter name: ");
    scanf("%s", name);

    for(i=0; phone[i][0][0]; i++){
        if(!strcmp(name, phone[i][0])){
            printf("Number: %s", phone[i][1]);
        }
    }

}
