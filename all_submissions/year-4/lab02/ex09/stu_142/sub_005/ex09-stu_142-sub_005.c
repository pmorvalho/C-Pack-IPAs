
#include <stdio.h>

int main()
{
    int n, min, seg, hora;
    min = seg = hora = 0;
    scanf("%d", &n);
    min = n / 60;
    seg = n % 60;
    hora = min / 60;
    min = min % 60;
    printf("%02d:%02d:%02d\n", hora, min, seg);
    return 0;
}