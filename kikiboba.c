#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int n;
    int countb=0;
    int countk=0;
    
    scanf("%s", string);
    
    n = strlen(string);
    
    for (int i=0;i<n;i++){
        if (string[i]=='b') countb++;
        if (string[i]=='k') countk++;
    }
    
    if (countb==0 && countk==0){
        printf("none");    
    } 
    else if (countb>countk){
        printf("boba");    
    }
    else if (countb<countk){
        printf("kiki");    
    }
    else if (countb==countk){
        printf("boki");   
    } 

}