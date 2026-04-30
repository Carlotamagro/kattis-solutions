#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k;
    int *numbers;
    
    scanf("%d %d", &n, &k);
    
    numbers = malloc(n * sizeof(int));
    
    if (numbers == NULL) printf("Erro");
    
    for (int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
    }
    
    if (numbers[0]==k){
        printf("fyrst");
        return 0;
    } 
    if (numbers[1]==k){
        printf("naestfyrst");
        return 0;
    } 
    
    for (int j=2;j<n;j++){
        if (numbers[j]==k){
            printf("%d fyrst", j+1);
            return 0;
        }
    }
    
    free(numbers);
    numbers = NULL;
}