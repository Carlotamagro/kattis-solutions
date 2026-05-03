#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    
    scanf("%s", s);
    
    
    if (strstr(s,"kth")==0) printf("no");
    else printf("yes");
}