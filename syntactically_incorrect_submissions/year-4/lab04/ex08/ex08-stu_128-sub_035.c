
#include <stdio.h>
#include <string.h>

#define DIM 100

int main()
{
    char c;
    char numero1[DIM];
    char numero2[DIM];
    int i = 0;
    while ((c=getchar())!= EOF && c!= '\n' && c !=' ')
    {
        numero1[i]= c;
        i++;
    }
    numero1[i]= '\0';
    i=0;
    while ((c=getchar())!= EOF && c!= '\n' && c !=' ')
    {
        numero2[i]= c;
        i++;
    }
    numero2[i]= '\0';
    i=0;
    int n = strlen(numero1);
    for (i;i<n;i++)
    {
        if (numero1[i]>numero2[i]) 
        {
            printf("%s\n",numero1);
            break;
        }
        else if (numero2[i]>numero1[i]) 
        {
            printf("%s\n",numero2);
            break;
        }
    }
    return 0;
}