#include <stdio.h>

int main(){
    char logger[1000];
    
    fgets(logger,1000, stdin);
    printf(" %s",logger);
}