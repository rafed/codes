#include<stdio.h>

void main(){

   int array[300];
   int i, j;
   int num, temp=0, count=1, x;
   int sum=0;

   //finding factorial
   array[0]=1;

   printf("Enter the number to find the factorial of: ");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
        for(j=0; j<count; j++){
            x=array[j]*i+temp;
            array[j]=x%10;
            temp=x/10;
        }
        while(temp>0){
            array[count]=temp%10;
            temp=temp/10;
            count++;
        }
   }

   for(i=count-1; i>=0; i--){
        printf("%d", array[i]);
   }

   for(i=0; i<count; i++){
        sum+=array[i];
   }

   printf("\nThe sum is %d", sum);

}
