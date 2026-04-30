#include <stdio.h>

int main(){
    int n;
    char b;
    char card[400][3];
    int result=0;
    
    //leitura
    scanf("%d %c", &n, &b);

    for (int i=0;i<4*n;i++){
        scanf("%s",card[i]);
    }
    
    //resolução
    for(int i=0;i<4*n;i++){
        if (card[i][0]=='A') result+=11;
        if (card[i][0]=='K') result+=4;
        if (card[i][0]=='Q') result+=3;
        if (card[i][0]=='J'){
            if (card[i][1]==b){
                result+=20;
            } else{
                result+=2;
            }
        }
        if (card[i][0]=='T') result+=10;
        if (card[i][0]=='9'){
            if (card[i][1]==b){
                result+=14;
            }
        }
    }
    
    printf("%d", result);
}