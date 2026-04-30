#include <stdio.h>

int main(){
    char s[20];
    int ones=0;
    int zeros=0;
    
    scanf("%s", s);
    
    for (int i=0;s[i]!='\0';i++){
        if (s[i]=='1') ones++;
        else if (s[i]=='0') zeros++;
    }
    
    printf("%d %d", zeros, ones);
}