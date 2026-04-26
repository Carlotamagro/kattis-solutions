#include <stdio.h>

int main(){
    char word[100000];
    int count;
    
    scanf("%s", word);
    
    for (int i=0;word[i]!='\0';i++){
        count++;
    }
    printf("%d", count);
    
}