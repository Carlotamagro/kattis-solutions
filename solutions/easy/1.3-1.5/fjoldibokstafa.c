#include <stdio.h>

int main(){
    int n=0;
    char string[100];
    int i=0;

    scanf("%s",string);
    
    //calcular o n
    while (n<100 && string[i]!='\0'){
        if ((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')){
            n++;
        }
        i++;
    }
    
    printf("%d",n);
}