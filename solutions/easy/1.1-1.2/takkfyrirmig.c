#include <stdio.h>

int main(){
    int n;
    char names[2000][2000];
    
    scanf("%d", &n);
    
    for (int i=0;i<=n;i++){
        scanf("%s",names[i]);
    }
    
    for(int j=0;j<=n-1;j++){
        printf("Takk %s\n", names[j]);
    }
}