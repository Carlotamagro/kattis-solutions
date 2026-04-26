#include <stdio.h>

int main(){
    float v, a, t;
    scanf("%f %f %f", &v,&a,&t);
    
    float d = ((v*t)+((0.5)*(a*(t*t))));
    
    printf("%f",d);
}