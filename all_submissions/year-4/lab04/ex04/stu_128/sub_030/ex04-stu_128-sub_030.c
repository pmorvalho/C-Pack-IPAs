
#include <stdio.h>
#include <string.h>

#define MAX 80
#define SIM 1
#define NAO 0

int main()
{
    int state = SIM;
    char lista[MAX];
    scanf("%s",lista);
    int n = strlen(lista);
    for (int i=0;i<n-1;i++)
    {
        n--;
        if (lista[i]!=lista[n]) state = NAO;
    }
    if (state == SIM) printf("yes\n");
    else if (state == NAO) printf("no\n");
    return 0;
} 
