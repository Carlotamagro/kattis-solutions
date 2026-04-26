#include <stdio.h>

int main(){
    int n, x;
    int numb[100000000];
    int count=0;
    
    scanf("%d %d", &n,&x);
    
    for (int i=0; i<=n; i++){
        scanf("%d", &numb[i]);
    }
    
    for (int i=0;i<=n;i++){
        count = count + numb[i];
    }
    
    if (count > x){
        printf("Neibb");
    } else {
        printf("Jebb");
    }
}