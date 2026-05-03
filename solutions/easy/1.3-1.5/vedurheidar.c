#include <stdio.h>

int main(){
    int v; //wind speed
    int n; //number of roads
    char name[200][200];
    int k[200];
    
    scanf("%d", &v);
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%s",name[i]);
        scanf("%d", &k[i]);
    }
    
    for (int i=0;i<n;i++){
        if (v<=k[i]){
            printf("%s opin\n", name[i]);
        } else if (v>k[i]){
            printf("%s lokud\n", name[i]);
        }
    }
    
}