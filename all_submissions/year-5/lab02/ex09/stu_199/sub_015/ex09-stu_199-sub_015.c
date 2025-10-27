

#include <stdio.h>
int main(){

    int temp, hours, minutes, seconds;
    scanf("%d", &temp);

    while (temp > 0) {
        hours = temp / 3600;
        minutes = (temp % 3600) / 60;
        seconds = (temp % 3600) % 60;
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    return 0;
}