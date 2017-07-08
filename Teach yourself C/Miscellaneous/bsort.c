#include<stdio.h>

void main(){

    int num[]={3,23,234,34,45,67,65,78,34,45,65,76,87,98,0,98,67,123,234,345,456,567,678,789,890,321,432,543,654,756,876,987,8907,35,74,457,28,847,925,93,4,53,3,6,44,64,356, 456, 345, 234 , 485, 968, 385, 247, 234,426,346,1,234,540,604,503,694,294};

    int i, j, n, temp;

    n=sizeof(num)/sizeof(int);
    printf("size of n is %d", n);

    //sort
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(num[i]>num[j]){
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }

    printf("\n");
    for(i=0; i<n; i++) printf("%d\n", num[i]);

    //search engine (binary search)
    n;
    int search, min=0, max=n-1;
    i=max/2;

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for(;;){
        if(search==num[i]){
            printf("Found %d.", num[i]);
            break;
        }
        else if(search<=num[i]) max=i-1;
        else if(search>=num[i]) min=i+1;

        i=(max+min)/2;

        if(min>max){
            printf("Couldn't find %d", search);
            break;
        }
    }

}

//Coded by Rafed.
