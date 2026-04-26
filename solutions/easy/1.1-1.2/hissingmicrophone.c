#include <stdio.h>
#include <string.h>

int main(){
    char line[30];

    scanf("%s", line);
    char *result = strstr(line, "ss");
    
    if(result!=NULL){
        printf("hiss");
    } else{
        printf("no hiss");
    }
    
    
}