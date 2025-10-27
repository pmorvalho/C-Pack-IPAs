
#include <stdio.h>

int main()
{
    int n; 
    float val, media = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &val);
        
        if (i > 1)
            media = media * (i - 1) / i;
        media += val / i;
    }
    
    printf("%.2f\n", media);

    return 0;
}