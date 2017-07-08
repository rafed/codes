#include<stdio.h>

void main(){

    int i, j, num, palindrome=0, reverse, temp;

    for(i=100; i<1000; i++){
        for(j=100; j<1000; j++){
            num=i*j;
            temp=num;
            reverse=0;
            while(temp!=0){
                reverse=reverse*10;
                reverse=reverse+temp%10;
                temp=temp/10;
            }
            if(reverse==num){
                if(reverse>palindrome){
                    palindrome=num;
                }
            }
        }
    }

    printf("The biggest palindrome number is %d", palindrome);

}

//Coded by Rafed.
