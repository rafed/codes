#include<stdio.h>

void main(){

    int serverUsers[5][2]={
        1, 14,
        2, 28,
        3, 19,
        4, 8,
        5, 15
    };
    int server;
    int i;

    printf("Enter the server number: ");
    scanf("%d", &server);

    //look it up in the table
    for(i=0; i<5; i++){
        if(server==serverUsers[i][0]){
            printf("There are %d users on server %d. \n", serverUsers[i][1], server);
            break;
        }
    }

    if(i==5) printf("Server not listed. \n");

}
