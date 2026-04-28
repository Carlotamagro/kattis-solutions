#include <stdio.h>

int main(){
    int numbers[10];
    int modulos[10];
    int count = 0;
    
    for (int i=0;i<10;i++){
        scanf("%d", &numbers[i]);
    }
    
    for (int i=0;i<10;i++){
        modulos[i] = numbers[i]%42;
    }
    
    for (int i=0;i<10;i++){
        int duplicate = 0;
        for (int j=0;j<i;j++){
            if (modulos[i]==modulos[j]){
                duplicate = 1;
                break;
            }    
        }
        if (duplicate == 0){
            count++;
        }
    }
    
    printf("%d", count);
}