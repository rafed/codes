#include<stdio.h>
#include<stdlib.h>

double d[10]={
    10.23, 19.87, 1002.23, 12.9, 0.897,
    11.45, 75.34, 0.0, 1.01, 875.875
};

int main(){

    long loc;
    double value;
    FILE *fp;

    if((fp=fopen("myfile.txt", "wb"))==NULL){
        printf("Error opening file.\n");
        exit(10);
    }

    //write the entire array in one step
    if(fwrite(d, sizeof d, 1, fp)!=1){
        printf("Write error.\n");
        exit(1);
    }
    fclose(fp);

    if((fp=fopen("myfile.txt", "rb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Which element?");
    scanf("%ld", &loc);
    if(fseek(fp, loc*sizeof(double), SEEK_SET)){
        printf("Seek error");
        exit(1);
    }

    fread(&value, sizeof(double), 1, fp);
    printf("Element %ld is %f", loc, value);

    fclose(fp);

    return 0;

}
