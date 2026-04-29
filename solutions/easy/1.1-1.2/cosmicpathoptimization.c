#include <stdio.h>

int main(){
        int m; //numb of temp readings
        int t[10000]; //temp readings
        int mean;
        int sum = 0;
        
        //leitura
        scanf("%d", &m);
        for (int i=0;i<m;i++){
            scanf("%d", &t[i]);
        }
        
        //calculo da soma
        for (int j=0;j<m;j++){
            sum = sum + t[j];
        }
        
        mean = sum/m;
        
        printf("%d", mean);
        
}