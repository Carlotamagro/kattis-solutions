#include <stdio.h>

int main(){
    int n;
    char k;
    char line[10000];
    
    scanf("%d", &n);
    scanf(" %c", &k);
    scanf("%s", line);
    
    for (int i=0;i<n;i++){
        if (k==line[i]){
            printf("Unnar fann hana!");
            return 0;
        }
    }
    
    printf("Unnar fann hana ekki!");
}