#include <stdio.h>
#include <ctype.h>

int main(){
    char line[100];
    int check;
    
    scanf("%s", line);
    
    for (int i=0;line[i]!='\0';i++){
        check = isupper(line[i]);
        if(check!=0){
            printf("%c", line[i]);
        }
    }
}