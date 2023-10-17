

#include <stdio.h>

#define HORASEMSEG 3600
#define MINEMSEG 60

int main()
{
int sintro, h, m, s;

scanf("%d", &sintro);
    h = (sintro/HORASEMSEG);
    m = ((sintro%HORASEMSEG)/MINEMSEG);
    s = (sintro%MINEMSEG);
printf("%02d:%02d:%02d\n", h, m, s);
return 0;
}

