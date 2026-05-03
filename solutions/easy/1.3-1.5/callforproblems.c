#include <stdio.h>

int main(){
    int n;
    int d[50];
    int count = 0;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%d", &d[i]);
    }
    
    for (int j=0;j<n;j++){
        if (d[j]%2!=0) count++;
    }
    
    printf("%d", count);
}