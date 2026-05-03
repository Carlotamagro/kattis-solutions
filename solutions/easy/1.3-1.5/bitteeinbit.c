#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char arr[100];
    int n=0;

    scanf("%s",arr);
    
    while (arr[n] != '\0') {
        n++;
    }
    
    srand(time(NULL)); //inicializa

    int indice = rand() % n;

    printf("%c",arr[indice]);
    
}