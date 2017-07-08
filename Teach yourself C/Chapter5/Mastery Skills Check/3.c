#include<stdio.h>

void main(){

    int stat[20];
    int i, j; //loop var

    printf("Enter your numbers to find mode: ");
    for(i=0; i<20; i++){
        scanf("%d", &stat[i]);
    }

    ////////////find mode//////////////
    int num, oldmode, mode, oldcount=0, count;

    for(i=0; i<20; i++){
        mode=stat[i];
        count=1;

        for(j=i+1; j<20; j++){
            if(mode==stat[j]) count++;
        }

        if(count>oldcount){
            oldcount=count;
            oldmode=mode;
        }
    }

    printf("The mode is %d", oldmode);

}
