#include <stdio.h>

int main(){
    int n;
    int m;
    char s;
    scanf("%d %c %d", &n, &s, &m);
    
    if (n<m){
        printf("<");
    }
    
    if(n>m){
        printf(">");
    }
    
    if(n==m){
        printf("Goggi svangur!");
    }
}