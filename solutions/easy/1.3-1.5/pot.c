#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int numbers[10000];
    int powers[10000];
    int bases[10000];
    int digitos[10000];
    int sum=0;
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
    }
    
    for (int m=0; m<n;m++){
        bases[m]=numbers[m]%10;
    }
    
    for (int o=0;o<n;o++){
        digitos[o]=numbers[o]/10;
    }
    
    for (int j=0; j<n;j++){
        powers[j]=pow(digitos[j],bases[j]);
    }
    
    for (int k=0;k<n;k++){
        sum = sum + powers[k];
    }
    
    printf("%d", sum);
}