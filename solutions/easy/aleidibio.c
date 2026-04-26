#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    int min=c-b-a;
    
    printf("%d", min);
}