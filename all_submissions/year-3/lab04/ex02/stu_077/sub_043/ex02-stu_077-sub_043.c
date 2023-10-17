
#include <stdio.h>

#define VECMAX 100

int max(int v[], int n)
{
    int i, m = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] > m)
            m = v[i];
    }
    return m;
}

int main()
{
    return 0;
}