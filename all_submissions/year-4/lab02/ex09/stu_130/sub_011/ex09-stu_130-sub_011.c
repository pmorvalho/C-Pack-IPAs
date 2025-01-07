
#include <stdio.h>

int main(){
    int time, h, m, s;

    scanf("%d", &time);
    h = time/3600;
    m = (time - h*3600 )/ 60;
    s = time - h*3600 - m*60;

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}