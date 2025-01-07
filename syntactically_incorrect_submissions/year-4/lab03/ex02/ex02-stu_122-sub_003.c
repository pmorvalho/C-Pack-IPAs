
#include <stdio.h>

void piramide (int n)
{
    if (n>=2){

        for (int i = 1; i <= n; i++){

            for(int j = 1; j <= n - i; j++)
                printf ("  ");

            for(int k = 1; k < i; k++)
                printf ("%2d",k);
            
            for(int l = i; l >= 1;l--)
                printf("%2d",l);
            printf("\n");
        }   
    }
}

int main ()
{
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}