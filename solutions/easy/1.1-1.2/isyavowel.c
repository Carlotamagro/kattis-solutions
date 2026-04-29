#include <stdio.h>
#include <ctype.h>

int main(){
    char s[80];
    int count = 0;
    int county = 0;
    
    fgets (s,sizeof(s),stdin);
    
    for (int i=0;s[i]!='\0';i++){
        char c = tolower(s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }
    for (int i=0;s[i]!='\0';i++){
        char c = tolower(s[i]);
        if (c=='y'){
            county++;
        }
    }
    
    printf("%d %d", count,count+county);
}