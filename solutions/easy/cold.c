#include <stdio.h>

int main(){
    int n;
    int count=0;
    int temp[1000000];
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%d", &temp[i]);
    }
    
    for (int j=0;j<n;j++){
        if (temp[j]<0){
            count++;
        }
    }
    
    printf("%d", count);
}