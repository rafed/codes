#include<stdio.h>
#include<stdlib.h>

double d[10]={
    10.23, 19.23, 1002.23, 12.9, 0.897, 11.45, 75.45, 0.0, 2.02, 875.875
};

void main(){

    int i;
    FILE *fp;

    if((fp=fopen("myfile.txt", "wb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    //write the entire array in one step
    for(i=0 ; i<10; i++){
        if(fwrite(d, sizeof d, 1, fp)!=1){
            printf("Write error.\n");
            exit(1);
        }
    }
    fclose(fp);
    if((fp=fopen("myfile.txt", "rb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    //clear the array
    for(i=0; i<10; i++) d[i]=-1.0;

    //read the entire array in one step
    if(fread(d, sizeof d, 1, fp)!=1){
        printf("Read error\n");
        exit(1);
    }
    fclose(fp);

    //display the array
    for(i=0; i<10; i++) printf("%f ", d[i]);

}
