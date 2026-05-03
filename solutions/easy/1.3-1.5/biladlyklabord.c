#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char buf[100000];
    int j=0;

    //leitura
    fgets (buf,sizeof(buf),stdin);
    int n=strlen(buf);
    
    //memoria
    char *line = malloc((n + 1) * sizeof(char));
    char *newLine = malloc((n + 1) * sizeof(char));
    strcpy(line, buf);
    
    //codigo
    for (int i=0;i<n;i++){
        if (line[i]==0||line[i]!=line[i-1]){
            newLine[j]=line[i];
            j++;
        }
    }
    newLine[j]='\0';
    
    printf("%s",newLine);
    
    //free memoria
    free(line);
    free(newLine);
}