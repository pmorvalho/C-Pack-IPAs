#include <stdio.h>

int min(x,y)
{
    int x, y;
    
    if(x <= y)
        return x;
    else
        return y;
}

int max(x,y)
{
    int x, y;
    
    if(x >= y)
        return x;
    else
        return y;
}

int print(x,y,z)
{
    int x, y, z;
    
    printf("%d %d %d\n", x, y, z);

    return 0;
}

int main()
{
    int x, y, z, a, b, m, M;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    a = min(x,y);
    m = min(a,z);

    b = max(x,y);
    M = max(b,z);

    if(x != m && x != M)
        print(m,x,M);
    else if(y != m && y != M)
        print(m,y,M);
    else
        print(m,z,M);
    
    return 0;

}

