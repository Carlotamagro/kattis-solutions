#include <stdio.h>
#include <string.h>

int main(){
    char word[250];
    char newWord[250];
    
    scanf("%s", word);
    int size = strlen(word);
    
    int j=0;
    for (int i=0;i<size;i++){
        if (i==0 || word[i]!=word[i-1]){
            newWord[j]=word[i];
            j++;
        }
    }
    
    newWord[j]='\0';
    printf("%s", newWord);
}