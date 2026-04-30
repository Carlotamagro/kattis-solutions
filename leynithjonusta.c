#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *string;
    int n;
    char *newString;
    int j=0;
    
    string = (char*) malloc(1000000 * sizeof(char));
    
    if (string == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }
    
    newString = (char*) malloc(1000000 * sizeof(char));

    if (newString == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }
    
    fgets(string,1000000,stdin);
    
    n=strlen(string);
    
    for (int i=0;i<n;i++){
        if (string[i]!='\n'&& string[i]!=' '){
            newString[j] = string[i];
            j++;
        }    
    }

    newString[j]='\0';

    printf("%s", newString);
    
    free(string);
    free(newString);
}