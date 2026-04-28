#include <stdio.h>
#include <string.h>

int main(){
    char word[50];
    int bola = 1;
    int size;
    
    for(int j=0;word[j]!='\0';j++){
        scanf("%s", word);
    }    
    
    size = strlen(word);
    
    for(int i=0;i<size;i++){
        if (word[i] == 'A'){
            if (bola == 1){
                bola = 2;
            } else if(bola==2){
                bola = 1;
            }
        } else if (word[i]=='B'){
            if (bola == 2){
                bola = 3;
            } else if(bola == 3){
                bola = 2;
            }
        } else if (word[i]=='C'){
            if (bola == 1){
                bola = 3;
            } else if (bola == 3){
                bola = 1;
            } 
        }
    }
    
    printf("%d", bola);
    
}