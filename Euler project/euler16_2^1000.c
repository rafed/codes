#include<stdio.h>
#include<math.h>

void main(){

    int array[500];
    int i, j;
    int carry=0, count=1, x, num, sum=0;

    array[0]=1;

    printf("Enter the power of 2 to find the values: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        for(j=0; j<count; j++){
            x=array[j]*2+carry;
            array[j]=x%10;
            carry=x/10;
        }
        while(carry>0){
            array[count]=carry%10;
            carry/=10;
            count++;
        }
    }

    for(i=count-1; i>=0; i--){
        printf("%d", array[i]);
    }
    for(i=0; i<count; i++){
        sum+=array[i];
    }
    printf("\nThe sum is %ld", sum);

}
