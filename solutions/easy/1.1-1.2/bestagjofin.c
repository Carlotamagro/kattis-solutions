#include <stdio.h>

int main(){
    int n;
    int rating[1000];
    char name[1000][200];
    char line[3000];
    
    scanf(" %d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        fgets(line, 200, stdin);
        sscanf(line, " %s %d", name[i], &rating[i]);
    }
    
    int ma = rating[0];
	for (int j=1;j<n;j++){
        	if (rating[j]>ma){
           		ma = rating[j];
        	}
	}
	
	for (int k=0;k<n;k++){
	    if (ma == rating[k]){
	       printf("%s", name[k]);
	       return 0; 
	    }
	}
	
	return 0;
    
}