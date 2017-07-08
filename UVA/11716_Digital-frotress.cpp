#include<cstdio>
#include<string>
#include<cmath>
#include<iostream>
#include<sstream>

using namespace std;

int main(){

    char decrypt[100][100], ch;
    string str;
    int T, root, len;

    scanf("%d\n", &T);
    while(T--){
        getline(cin, str);
        len=str.length();
        root=sqrt(len);
        if(len!=root*root) printf("INVALID\n");
        else{
        	istringstream iss(str);
            for(int i=0; i<root; i++){
            	for(int j=0; j<root; j++){
            		iss.get(ch);
            		decrypt[i][j]=ch;
            	}
            }
            for(int i=0; i<root; i++){
            	for(int j=0; j<root; j++){
            		printf("%c", decrypt[j][i]);
            	}
            }
            printf("\n");
        }
    }

    return 0;

}
