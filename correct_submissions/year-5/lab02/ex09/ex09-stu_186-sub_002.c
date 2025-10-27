
#include <stdio.h> 
int main() {
    int segTotal, hh, mm, ss;

    scanf("%d", &segTotal);

    hh = segTotal / 3600;
    mm = (segTotal % 3600) / 60;
    ss = segTotal % 60;

    
    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}