# include <stdio.h>

int main ()
{
    int n, i;
    float k, soma=0;

    scanf ("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf ("%f", &k);
        soma += k;
    }
    printf ("%.2f\n", soma/n);


    return 0;
}
