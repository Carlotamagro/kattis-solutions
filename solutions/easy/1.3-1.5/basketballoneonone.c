#include <stdio.h>

int main(){
    char string[200];
    int counta=0;
    int countb=0;
    
    scanf("%s", string);
    
    for (int i=0;string[i]!='\0';i++){
        if(string[i]=='A'){
            if(string[i+1]=='1') counta++;
            else if(string[i+1]=='2'){
                counta=counta+2;
            }
        }
        if(string[i]=='B'){
            if(string[i+1]=='1') countb++;
            else if(string[i+1]=='2'){
                countb=countb+2;
            }
        }
    }
    
    if(counta>countb) printf("A");
    else printf("B");

}