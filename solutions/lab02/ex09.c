#include <stdio.h>

#define TUNITS 60

int main() {
    int time;

    scanf("%d", &time);
    printf("%02d:%02d:%02d\n",
           time/(TUNITS*TUNITS),
           (time/TUNITS)%TUNITS,
           time%TUNITS);

    return 0;
}
