#include <stdio.h>

int main(){
    int n; //number of revenues/expenses
    char string[1000][100];
    int money[1000000];
    int sum = 0;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%s", string[i]);
        scanf("%d", &money[i]);
    }
    
    for (int j=0;j<n;j++){
        sum = sum + money[j];
    }
    
    if (sum>0) printf("Usch, vinst");
    else if (sum==0) printf("Lagom");
    else if (sum<0) printf("Nekad");
}