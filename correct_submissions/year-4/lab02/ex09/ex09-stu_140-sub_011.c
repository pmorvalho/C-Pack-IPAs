
#include <stdio.h>
int main(){
    int num,seg,min,horas;
    scanf("%d",&num);
    seg=num%60;
    num=num/60;
    min=num%60;
    horas=num/60;
    printf("%02d:%02d:%02d\n",horas,min,seg);
    return 0;
}