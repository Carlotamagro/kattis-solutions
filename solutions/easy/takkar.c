#include <stdio.h>

int main(){
    int a;
    int b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a>b){
        printf("MAGA!");
    } else if (b>a){
        printf("FAKE NEWS!");
    } else if (a==b){
        printf("WORLD WAR 3!");
    }
}