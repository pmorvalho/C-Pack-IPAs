
#include <stdio.h>
int main(){
    int horas,min,seg;
    horas=min=0;
    scanf("%d",&seg);
    while (seg>=60){
        seg=seg-60;
        min++;
    }
    while (min>=60){
        min=min-60;
        horas++;
    }
    printf("%02d:%02d:%02d",horas,min,seg);
}