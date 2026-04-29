#include <stdio.h>

int main(){
    int k;
    int s;
    int resp;
    
    scanf("%d %d", &k, &s);
    
    if (s%k==0) resp=s/k;
    else resp=(s/k)+(s%k);
    
    printf("%d", resp);
}