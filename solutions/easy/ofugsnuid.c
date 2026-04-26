#include <stdio.h>

int main(){
    int list[100000000];
    int n;
    scanf("%d", &n);
    
    //reads the numbers and puts them in an array
    for (int i=0;i<n;i++){
        scanf("%d", &list[i]);
    }

    // Display the values of the array
    for(int i = n-1; i >=0 ; i--) {
        printf("%d\n", list[i]);
    }
}