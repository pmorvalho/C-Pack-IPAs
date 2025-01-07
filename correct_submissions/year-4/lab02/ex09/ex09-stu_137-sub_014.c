
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int sec, min, hour;
    scanf("%d", &sec);
    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;
    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}