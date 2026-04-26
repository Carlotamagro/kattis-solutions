#include <stdio.h>

int main(){
    int kg, q, r, b, k, p;
    
    scanf("%d %d %d %d %d %d", &kg, &q, &r, &b, &k, &p);
    
    int kings = 1-kg;
    int queens = 1-q;
    int rooks = 2-r;
    int bishops = 2-b;
    int knights = 2-k;
    int pawns = 8-p;
    
    printf("%d %d %d %d %d %d", kings, queens, rooks, bishops, knights, pawns);
}