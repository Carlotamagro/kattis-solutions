#include <stdio.h>

int main(){
    int a, b, c;
    int result;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    result=(b*b)-(4*a*c);
    
    if(result>0){
        printf("2");
    } else if(result==0){
        printf("1");
    } else if (result<0){
        printf("0");
    }
}