#include <stdio.h>

int main(){
    int coordx[1000];
    int coordy [1000];
    int x, y;

    
    for (int i=0;i<3;i++){
        scanf("%d %d",&coordx[i],&coordy[i]);
    }
    
    
    for (int i=0;i<3;i++){
        int match_x=0;
        int match_y=0;
        for (int j=0;j<3;j++){
            if (i!=j && coordx[i]==coordx[j]){
                match_x = 1;
            }
            if (i!=j && coordy[i]==coordy[j]){
                match_y = 1;
            }
        }
        if (match_x == 0){
            x=coordx[i];
        }
        if (match_y == 0){
            y=coordy[i];
        }
    }
    printf("%d %d", x, y);
}