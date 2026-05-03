#include <stdio.h>

int main(){
    int h,w;
    int l,v;
    int c;
    scanf("%d %d %d %d", &h, &w, &l, &c);
    
    v=h*w*l;
    
    if (c==v) {
        printf("COZY");
    }
    else if(c>v){
        printf("TOO TIGHT");
    } 
    else if(c<v) {
        printf("SO MUCH SPACE");
    }
}