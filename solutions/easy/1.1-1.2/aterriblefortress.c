#include <stdio.h>

int main(){
    int n; // lenght of the halloway
    int blazes[1000];
    int sum=0;
    
    scanf("%d",&n);
    
    for (int i=0; i< n; i++){
        scanf("%d",&blazes[i]);
    }
    
    for (int j=0; j<n;j++){
        sum = sum + blazes[j];
    }
    
    printf("%d",sum);
}