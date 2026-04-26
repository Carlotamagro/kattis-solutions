#include <stdio.h>

int main(){
    int n;
    int k;
    int year=2022;
    
    scanf("%d", &n);
    scanf("%d", &k);
    
    int x=n/k;
    year+=x;
    
    printf("%d", year);
    
}