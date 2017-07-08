#include<stdio.h>

void main(){

    char pass[]="Tristan", entry[20];
    int wrong=0;

    again:
        printf("Enter password: ");
        scanf("%s", entry);
        if(!strcmp(pass, entry)){
            printf("Log on successful");
            goto done;
        }
        else {
            wrong++;
            if(wrong==3) goto end;
            printf("Wrong password.\n");
            goto again;
        }
    end:
        printf("Access denied");

    done:
        1+1;

}
