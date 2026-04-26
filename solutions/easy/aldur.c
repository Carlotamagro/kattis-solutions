#include <stdio.h>

int main(){
    int n;
    int age[10000];
    int mi;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%d", &age[i]);
    }
    
    mi = age[0];
    
    for (int j=1;j<n;j++){
        if (age[j]<mi){
            mi = age[j];
        }
    }
    
    printf("%d", mi);
}