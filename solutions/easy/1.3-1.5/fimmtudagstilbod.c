#include <stdio.h>

int main(){
    int y;
    int year = 2020;
    int price = 1000;
    int x;
    int add;
    
    scanf("%d", &y);
    
    if (year>=y){
        printf("%d", price);
    }
    else if (year<y){
        x = y-year;
        add = x*100;
        printf("%d",add+price);
    }
    
}