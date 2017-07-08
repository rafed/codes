#include <stdio.h>

int main(){

    int N, i, j, num, temp, nums[10];

    scanf("%d", &N);
    while(N--){
        for(i=0; i<10; i++) nums[i]=0;
        scanf("%d", &num);
        for(i=1; i<=num; i++){
            temp=i;
            while(temp>9){
                nums[temp%10]++;
                temp/=10;
            }
            nums[temp]++;
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]);
    }

    return 0;

}


