
#include <stdio.h>

#define DIM 100

int main()
{
    int list[DIM];
    int n;
    int input;
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&input);
        list[i] = input;
        for(int k = 0; k<input;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}