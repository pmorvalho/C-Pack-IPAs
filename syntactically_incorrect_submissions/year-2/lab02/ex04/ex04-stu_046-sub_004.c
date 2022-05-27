#include <stdio.h>

int min(x1,y1)
{
    int x1, y1;
    
    if(x1 <= y1)
        return x1;
    else
        return y1;
}

int max(x2,y2)
{
    int x2, y2;
    
    if(x2 >= y2)
        return x2;
    else
        return y2;
}

int print(x3,y3,z3)
{
    int x3, y3, z3;
    
    printf("%d %d %d\n", x3, y3, z3);

    return 0;
}

int main()
{
    int x4, y4, z4, a, b, m, M;
    
    scanf("%d", &x4);
    scanf("%d", &y4);
    scanf("%d", &z4);

    a = min(x4,y4);
    m = min(a,z4);

    b = max(x4,y4);
    M = max(b,z4);

    if(x4 != m && x4 != M)
        print(m,x4,M);
    else if(y4 != m && y4 != M)
        print(m,y4,M);
    else
        print(m,z4,M);
    
    return 0;

}

