
# include <stdio.h>

int main() {
    int secs, mins, hour;
    scanf("%d",&secs);

    mins = secs /60;
    hour = mins /60;
    mins %=60;
    secs %=60;

    printf("%02d:%02d:%02d\n", hour, mins, secs);

    return 0;
}