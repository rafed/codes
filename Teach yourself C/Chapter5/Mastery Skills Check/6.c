#include<stdio.h>

void main(){

    char dict[5][2][80]={
        "Apple", "A tropical fruit",
        "Ball", "A spherical toy",
        "Cat", "A four legged mammalian animal",
        "Don", "Criminal lord",
        "'"
    };
    char entry[40];

    do{
        int i=0;

        printf("Enter a word to search its meaning (or enter \"quit\" to quit): ");
        gets(entry);

        while(strcmp(dict[i][0],"'")){
            if(!strcmp(entry, dict[i][0])){
                printf("Meaning: %s\n", dict[i][1]);
            }
            i++;
        }

        if(!strcmp(dict[i][0], "'")) printf("This word is not in dictionary.\n");

    } while(strcmp(entry, "quit"));

}
