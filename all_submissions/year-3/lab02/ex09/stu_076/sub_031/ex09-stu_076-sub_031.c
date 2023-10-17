
#include <stdio.h>

int main()
{
    int num, horas, mins, segs;

    scanf("%d", &num);

    horas = num / 3600;
    segs = num % 3600;
    mins = segs / 60;
    segs = segs % 60;

    printf("%02d:%02d:%02d\n", horas, mins, segs);

    return 0;
}
