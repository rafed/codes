#include<stdio.h>

void main(){

    FILE *fp;

    unsigned long long int current=1;
    unsigned long long int greatest=0;
    int i, j, start, end;
    unsigned short int num=0;

    fp=fopen("input.txt", "rb");

    while(!feof(fp)){
        for(i=0; i<13; i++){
            num=fgetc(fp)-48;
            printf("%hu\n", num);
            current*=num;
        }
        printf("Current: %llu\n", current);
        if(current>greatest) greatest=current;
        current=1;
        fseek(fp, -12, SEEK_CUR);
        if(num==65487) break;
    }

    fclose(fp);

    printf("The largest product is %lld", greatest);

}

//Coded by Rafed.
