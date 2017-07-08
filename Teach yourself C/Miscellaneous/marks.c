#include<stdio.h>
#include<string.h>

void main(){

    int i, j, k; //loop variables
    float marks[3][3][5]; //roll, subject, exam type
    char name[3][2][10];//first name, last name
    int pos[3][2]; //CGPA and roll, sort and use array index as position
    int choice, op, rollscan;//user options
    char namescan[10];//for name searching

    //data entry part
    for(i=0; i<3; i++){

        printf("Enter data for roll %d: \n", i+1);
        printf("Enter first name: ");
        scanf("%s", name[i][0]);
        printf("Enter second name: ");
        scanf("%s", name[i][1]);

        for(j=0; j<3; j++){
            printf("Enter data for subject %d: \n", j+101);
            for(k=0; k<3; k++){
                if(k==0) printf("\tEnter mid term marks:");
                else if(k==1) printf("\tEnter lab exam marks:");
                else if(k==2) printf("\tEnter final exam marks:");
                scanf("%f", &marks[i][j][k]);
            }
        }
    }

    ///////////////Data processing///////////////

    //Calculating total
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            marks[i][j][3]=marks[i][j][0]+marks[i][j][1]+marks[i][j][2];
        }
    }
    //calculating GPA (for each subjects)
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(marks[i][j][3]>=80) marks[i][j][4]=4;
            else if(marks[i][j][3]>=70) marks[i][j][4]=3.5;
            else if(marks[i][j][3]>=60) marks[i][j][4]=3;
            else if(marks[i][j][3]>=50) marks[i][j][4]=2.5;
            else if(marks[i][j][3]>=40) marks[i][j][4]=2;
            else marks[i][j][4]=0;
        }
    }

    do{
        printf("\nMain menu \n");
        printf("1. See CGPA \n");
        printf("2. See merit list \n");
        printf("3. See report card \n");
        printf("4. Quit\n");
        printf("Your option: ");
        scanf("%d", &choice);

        if(choice==1){
            printf("Search by: \n1. Name \n2. Roll \n");
            scanf("%d", &op);
            if(op==1){
                printf("Enter name: ");
                scanf("%s", namescan);
            }
            else if(op==2){
                printf("Enter roll: ");
                scanf("%d", &rollscan);
                printf("Roll %d got %.2f", rollscan, marks[rollscan][2][4]);
            }
        }

        else if(choice==2){
            printf("Search by: \n1. Name \n2. Roll \n");
            scanf("%d", &op);
            if(op==1){
                printf("Enter name: ");
                scanf("%s", namescan);
            }
            else if(op==2){
                printf("Enter roll: ");
                scanf("%d", &rollscan);
                printf("The merit of %d is 2", rollscan);
            }
        }

        else if(choice==3){
            printf("Search by: \n1. Name \n2. Roll \n");
            scanf("%d", &op);
            if(op==1){
                printf("Enter name: ");
                scanf("%s", namescan);
            }
            else if(op==2){
                printf("Enter roll: ");
                scanf("%d", &rollscan);
                printf("Subject\t Mid\t Lab\t Final\t total\t GPA \n");
                printf("101\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f \n", marks[rollscan][0][0], marks[rollscan][0][1], marks[rollscan][0][2], marks[rollscan][0][3], marks[rollscan][0][4]);
                printf("102\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f \n", marks[rollscan][1][0], marks[rollscan][1][1], marks[rollscan][1][2], marks[rollscan][1][3], marks[rollscan][1][4]);
                printf("103\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f \n", marks[rollscan][2][0], marks[rollscan][2][1], marks[rollscan][2][2], marks[rollscan][2][3], marks[rollscan][2][4]);
            }
        }

        else if(choice!=4) printf("\nPlease enter a valid option.\n");

    } while(choice!=4);

}

//Coded by Rafed.



/*Primary idea
for(i=0; i<3; i++){
        if(i==0) printf("Enter mid term marks:\n");
        if(i==1) printf("Enter lab exam marks:\n");
        if(i==2) printf("Enter final exam marks:\n");
        for(j=0; j<3; j++){
            printf("\tEnter for course %d:\n", j+101);
            for(k=0; k<3; k++){
                printf("\t\tEnter for roll %d: ", k+1);
                scanf("%hd", &marks[i][j][k]);
            }
        }
    }
*/



