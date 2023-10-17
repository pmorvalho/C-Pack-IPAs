

#include <stdio.h>

int main () 
{

int N, i = 1, numdiv = 0; 

scanf("%d", &N);

while (i <= N) 
{
    if ((N%i) == 0)
    {
        numdiv++;
    }
i++;
}
printf("%d", numdiv);
return 0;
}