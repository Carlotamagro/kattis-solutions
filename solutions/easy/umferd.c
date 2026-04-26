#include <stdio.h>

int main(){
    int m, n;
    char line[20000][20000];
    float count = 0;

    scanf("%d", &m);
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%s", line[i]);
    }
    
    for (int j=0;j<n;j++){
        for (int k=0;k<m;k++){
            if (line[j][k]=='.'){
                count++;
            }
        }
        
    }
    
    float result = count / (n*m);
    
    printf("%f", result);
}