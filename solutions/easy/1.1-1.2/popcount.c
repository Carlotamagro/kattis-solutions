#include <stdio.h>

int main(){
    char string[100];
    int count = 0;
    
    scanf("%s",string);
    
    
    for (int i=0;string[i]!='\0';i++){
        if (string[i]=='1') count++;
    }
    
    printf("%d", count);
}