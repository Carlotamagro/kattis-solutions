#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int favoraveis = 0;
    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        if (d >= 2 && d <= 12)
            favoraveis += 6 - abs(d - 7);
    }
    
    printf("%.6f\n", (double)favoraveis / 36.0);
    return 0;
}