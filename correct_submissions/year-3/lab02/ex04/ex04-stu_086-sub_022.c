

#include <stdio.h>
 int main ()
 {
    int v1, v2, v3, min, meio, max;

    scanf("%d %d %d", &v1, &v2, &v3);

     if ((v1 < v2) && (v1 < v3))
    {
        min = v1;
    }
     if ((v2 < v1) && (v2 < v3))
    {
        min = v2;
    }
     if ((v3 < v1) && (v3 < v2))
    {
        min = v3;
    }

     if (min == v1)
    {
        if(v2 < v3)
        {
            meio = v2;
            max = v3;
        }
        else
        {
            meio = v3;
            max = v2;
        }
    }
     if (min == v2)
    {
        if (v1 < v3)
        {
            meio = v1;
            max = v3;
        }
        else
        {
            meio = v3;
            max = v1;
        }  
    }
     if (min == v3)
    {
        if (v1 < v2)
        {
            meio = v1;
            max = v2;
        }
        else
        {
            meio = v2;
            max = v1;
        }
    }
    printf("%d %d %d\n", min, meio, max);  
    return 0;
 }