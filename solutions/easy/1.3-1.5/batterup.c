#include <stdio.h>

int main(){
    int n;
    int numbers[100];
    float sum=0.0;
    float result;
    
    //leitura
    scanf("%d", &n);
    
    int m = n;
    
    for (int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
    }
    
    //calcular resultado
    for (int j=0;j<n;j++){
        if (numbers[j]==-1){
            m--;
        }
        else {
            sum = sum + numbers[j];
        }
    }
    
    result = sum/m;
    
    printf("%f", result);
}