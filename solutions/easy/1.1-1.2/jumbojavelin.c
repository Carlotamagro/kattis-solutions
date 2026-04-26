#include <stdio.h>

int main(){
    int n;
    int steel[100];
    int result = 0;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%d", &steel[i]);
    }
    
    for (int j=0;j<n;j++){
        result = result + steel[j];
    }
    
    result = result - (n-1);
    
    printf("%d", result);
}