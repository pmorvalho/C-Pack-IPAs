
#include <stdio.h>



int main()
{
    int h = 0, m = 0, s = 0, n;
    scanf ("%d", &n);
    if (n >= 60)
    {
        s = ((n % 60) * 60) / 100;
        m = n / 60;
        if (m >= 60)
        {
            h = (m / 60);
            m = ((m % 60) * 60) / 100;               
        }
    }
    else
        s = n;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}