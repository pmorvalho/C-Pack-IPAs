
#include <stdio.h>
int main()
{
    int n, count = 1, nd = 0;
    scanf("%d", &n);
    while(count <= n)
    {
        if(n % count == 0)
            nd++;
        count++;
    }
    printf("%d\n", nd);
    return 0;
}


#include <stdio.h>
int main()
{
    int n, c = 0, i;
    scanf("%d", &n);
    for(i = 1, i <= n, i++)
        if(n % i == 0)
            c++;
    printf("%d\n", c);
    return 0;
}
