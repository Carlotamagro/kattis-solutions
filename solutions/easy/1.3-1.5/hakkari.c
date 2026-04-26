#include <stdio.h>

int main(){
    int l, c;
    int mines=0;
    char lines[1000][10000];
    
//ler input
    scanf("%d %d", &l, &c);
    
    for (int i=0;i<l;i++){
        scanf("%s", lines[i]);
    }
    
//verificar char 
    for (int j=0;j<l;j++){
        for (int k=0;k<c;k++){
            if (lines[j][k]=='*'){
                mines++;
            }
        }
    }
    
    printf("%d\n", mines);

// imprimir coordenadas
    for (int p=0;p<l;p++){
        for (int s=0;s<c;s++){
            if (lines[p][s]=='*'){
                printf("%d %d\n", p+1, s+1);
            }
        }
    }
    
    
}