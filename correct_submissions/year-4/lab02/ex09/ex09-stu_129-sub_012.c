
#include <stdio.h>

int main()
{
    int n, seg, min, hora;
    scanf("%d", &n);
    hora = n / (60*60);
    n %= (60*60);
    min = n / 60;
    n %= 60;
    seg = n;
    printf("%02d:%02d:%02d\n", hora, min, seg);
    return 0;
}