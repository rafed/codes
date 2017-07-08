#include<stdio.h>
#include<string.h>

void main(){

    char *p[][2]={
        "Red delicious", "red",
        "Golden delicious", "yellow",
        "Winesap", "red",
        "Gala", "reddish orange",
        "Mutsu", "yellow",
        "Cortland", "red",
        "Jonathan", "red",
        "", ""
    };

    int i;
    char apple[80];

    printf("Enter name of apple: ");
    gets(apple);

    for(i=0; *p[i][0]; i++)
        if(!strcmp(apple, p[i][0]))
        printf("%s is %s\n", apple, p[i][1]);

}
