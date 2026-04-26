#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char meat[10000][10000];
    int cmp3;
    int cmp4;

    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%s", meat[i]);
    }
    
    int cmp1 = strcmp(meat[0],"nautakjot");
    int cmp2 = strcmp (meat[0],"kjuklingur");
    
    if (n>=2){
        if (cmp1==0){
            cmp3 = strcmp (meat[1],"kjuklingur");
            
            if (cmp3==0){
                printf("blandad best");
            } else {
                printf("nautakjot");
            }
        }
        if (cmp2==0){
            cmp4 = strcmp (meat[1],"nautakjot");
            
            if (cmp4==0){
                printf("blandad best");
            } else{
                printf("kjuklingur");
            }
        }
    } else if(n==1){
        if (cmp1==0){
            printf("nautakjot");
        } else if (cmp2==0){
            printf("kjuklingur");
        }
    }
    
}