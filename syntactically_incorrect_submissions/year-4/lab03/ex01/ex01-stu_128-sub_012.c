
#include <stdio.h>

void quadrado(int N);

int main()
{
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}

void quadrado(int N)
{
    int start = 1;
    int end = N;
    for (int i=0; i< N; i++) 
    {
        for(int num= start; num <= end; num++)
        {
            printf("%d\t",num);
        }
        printf("\n");
        end++;
        start++;
    }
}