#include <stdio.h>

int main(){
    int n;
    int numbers[1000];
    int sum = 0;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
    }
    
    for (int j=0;j<n;j++){
        sum = sum + numbers[j];
    }
    
    printf("%d", sum);
}