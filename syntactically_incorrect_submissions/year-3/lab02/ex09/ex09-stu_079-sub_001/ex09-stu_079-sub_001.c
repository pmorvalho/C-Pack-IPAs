
#include <stdio.h>

int main(){
    int num_segs_total_ex9, horas_ex9, mins_total_ex9, mins_resto_ex_9, segs_resto_ex9 = 0;
    scanf("%d", num_segs_total_ex9);
    mins_total_ex9 = num_segs_total_ex9 / 60;
    segs_resto_ex9 = num_segs_total_ex9 - (num_segs_total_ex9 / 60);
    horas_ex9 = mins_total_ex9 / 60;
    mins_resto_ex_9 = mins_total_ex9 - (horas_ex9 * 60);
    printf("%02d:%02d:%02d",horas_ex9,mins_resto_ex_9,segs_resto_ex9);
    return 0;
}