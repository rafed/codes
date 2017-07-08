#include<stdio.h>

int main(){

    short int N, ascend, descend, i;
    int lumberjack[10];

    scanf("%hd", &N);
    printf("Lumberjacks:\n");
    while(N--){
        ascend=descend=1;
        for(i=0; i<10; i++){
            scanf("%d", &lumberjack[i]);
        }
        for(i=1; i<10; i++){
            if(lumberjack[i]<lumberjack[i-1]){/*checking next number is smaller*/
                descend=0;
                break;
            }
        }
        for(i=1; i<10; i++){
            if(lumberjack[i]>lumberjack[i-1]){/*checking next number is greater*/
                ascend=0;
                break;
            }
        }
        if(ascend || descend){
            printf("Ordered\n");
        }
        else printf("Unordered\n");
    }

    return 0;

}
