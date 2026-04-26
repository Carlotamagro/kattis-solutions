#include <stdio.h>

int main(){
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a>90 || b>90 || c>90){
        printf("Trubbig Triangel");
    }
    
    if (a<90 && b<90 && c<90){
        printf("Spetsig Triangel");
    }
    
    if (a==90 || b==90 || c==90){
        printf("Ratvinklig Triangel");
    }
}