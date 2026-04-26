#include <stdio.h>

int main(){
    int n;
    int m;
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    int left = n % m;
    
    printf("%d", left);
}