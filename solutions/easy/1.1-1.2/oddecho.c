#include <stdio.h>

int main(){
    int n;
    char names[200][2000];
    
    scanf("%d", &n);
    
    for (int i=0;i<=n;i++){
        scanf("%s",names[i]);
    }
    
    for (int i=0;i<=n;i++){
        if (i%2==0){
            printf("%s\n", names[i]);
        }
    }
    
    return 0;
}