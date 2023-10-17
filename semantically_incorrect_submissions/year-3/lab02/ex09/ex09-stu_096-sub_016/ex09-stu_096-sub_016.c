
#include <stdio.h>
#define MIN 60;
#define HORA 3600;
int main(){
    int N, s, h=0, m=0, resto_m;
    scanf("%d", &N);
    if (N >= 3600){
        h = N/HORA;
        resto_m = N%HORA;
        m = resto_m/MIN;
        s = resto_m%MIN;
    }
    if (N<3600 && N>=60){ 
        h = 0;
        m = N/MIN;
        s = N%MIN;   
    }
    if (N < 60){
        h = m = 0;
        s = N;
    }
    if (h <= 9){
        if (m <= 9){
            if (s <= 9){
                printf("0%d:0%d:0%d", h, m, s);}
            else
                printf("0%d:0%d:%d", h, m, s);
        }
        else {
            if (s <= 9){
                printf("0%d:%d:0%d", h, m, s);}
            else
                printf("0%d:%d:%d", h, m, s);
        }    
    }
    else {
        if (m <= 9){
            if (s <= 9){
                printf("%d:0%d:0%d", h, m, s);}
            else
                printf("%d:0%d:%d", h, m, s);
        }
        else {
            if (s <= 9){
                printf("%d:%d:0%d", h, m, s);}
            else
                printf("%d:%d:%d", h, m, s);
        }
    }
    return 0;
}