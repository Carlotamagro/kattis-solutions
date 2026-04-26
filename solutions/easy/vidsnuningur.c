#include <stdio.h>
#include <string.h>

int main(){
    char line[1000];
    int n;
    
    scanf("%s", line);
    
    n=strlen(line);
    
    for(int i=n-1;i>=0;i--){
        printf("%c",line[i]);
    }
}