#include <stdio.h>

int main(){
    int n;
    float q[10000];
    float y[10000];
    double qaly=0.0;
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        scanf("%f %f", &q[i], &y[i]);
    }
    
    for (int j=0;j<n;j++){
        qaly = qaly + (q[j]*y[j]);   
    }
    
    printf("%lf", qaly);
}