#include <stdio.h>

int main(){
    int h, m;
    int minutos=0;
    int horas=0;
    int diferenca=0;
    
    scanf("%d %d", &h, &m);
    
    // converter horas para minutos
    minutos = (h*60)+m-45;
    
    
    if (minutos<0){
        minutos = minutos + (24*60);
    }
    
    //Converter minutos para horas-minutos
    horas = minutos/60;
    
    //minutos que sobram
    diferenca=minutos%60;
    
    
    
    printf("%d %d", horas, diferenca);
    
}