#include <stdio.h>

int main(){
    int r, c, zr, zc;
    char lines[50][100];
    
    scanf("%d %d %d %d", &r,&c,&zr,&zc);
    
    for (int i=0;i<r;i++){
        scanf("%s", lines[i]);
    }
    
    for (int j=0;j<r;j++){ //cada linha
        for (int m=0;m<zr;m++){ //imprime as vezes necessaria a linha
            for (int k=0;k<c;k++){ //cada coluna
                for (int l=0;l<zc;l++){ //imprime char quantas vezes necessaria
                    printf("%c", lines[j][k]);
                }
            }
            printf("\n");
        }
    }
}