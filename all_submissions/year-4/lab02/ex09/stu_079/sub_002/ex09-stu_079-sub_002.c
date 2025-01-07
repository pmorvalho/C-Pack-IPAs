

#include <stdio.h>

int main() {

    int segs_tot, segs, mins, mins_tot, horas;

    scanf("%d", &segs_tot);

    segs = segs_tot % 60;
    mins_tot = segs_tot / 60;
    mins = mins_tot % 60;
    horas = mins_tot / 60;

    printf("%02d:%02d:%02d\n", horas, mins, segs);


    return 0;
}
