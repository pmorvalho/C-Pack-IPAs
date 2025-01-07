
#include <stdio.h>

int main()
{
    int num,i,cont;
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        if ((num%i)==0)
            cont++;
    }
    return printf("%d\n",cont)==EOF;       
    }
