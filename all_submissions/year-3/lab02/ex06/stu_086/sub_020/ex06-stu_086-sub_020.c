

#include <stdio.h>

int main ()
{
    int N, i = 0;
    float numintrod;

    scanf("%d", &N);

    while (i < N)
    {
        scanf("%f", &numintrod);
        i = i + numintrod;
    }
     return 0;
    
}