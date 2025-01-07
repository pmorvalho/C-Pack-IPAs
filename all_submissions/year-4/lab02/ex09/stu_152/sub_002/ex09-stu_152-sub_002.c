
#include <stdio.h>

int main(){
    int sec, min, min_em_sec, hour;
    int total_sec;

    scanf("%d",&total_sec);

    hour = total_sec / 3600;
    min_em_sec = total_sec % 3600; 
    
    min = min_em_sec / 60;
    sec = min_em_sec % 60;

    printf("%02d:%02d:%02d",hour,min,sec);

    return 0;
}