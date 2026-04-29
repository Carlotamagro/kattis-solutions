#include <stdio.h>

int main(){
    int grades [10][20];
    int sums [100];
    int max;
    int std;
    
    //ler input
    for (int i=0;i<5;i++){
        for (int j=0;j<4;j++){
            scanf("%d", &grades[i][j]);
        }
    }
    
    //meter a soma das notas de cada um array
    for (int i=0;i<5;i++){
        sums[i]=0;
        for (int j=0;j<4;j++){
            sums[i] = sums[i] + grades[i][j];
        }
    }
    
    //ver no array das somas quem tem a soma mais alta
    max = sums[0];
    std=0;
    
    for (int i=1;i<5;i++){
        if (sums[i]>max){
            max = sums[i];
            std = i;
        }
    }
    
    printf("%d %d", std+1,max);
}