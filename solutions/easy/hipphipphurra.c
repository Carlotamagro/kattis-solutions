#include <stdio.h>

int main(){
    char name[200];
    int age;
    
    scanf("%s", name);
    scanf("%d", &age);
    
    for (int i=1;i<=age;i++){
        printf("Hipp hipp hurra, %s!\n", name);
    }
}