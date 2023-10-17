
#include <stdio.h>

int main()
{
    int num,i, e, numer ;
    scanf("%d", &num);
    for(i=0; i<num; i++)
        {
        scanf("%d", &numer);
        for(e=0; e<numer; e++)
        {
            printf("*");
        };
        printf("\n");
        };
    return 0;
}