#include <stdio.h>

int main(){
    char dna[1000];
    scanf("%s", dna);
    
    for(int i=0;dna[i] != '\0';i++){
        if (dna[i]=='C'){
            if (dna[i+1]=='O'){
                if (dna[i+2]=='V'){
                    printf("Veikur!");
                    return 0;
                }
            }
        }
    }
    
    printf("Ekki veikur!");
}