
#include <stdio.h>

int main()
{   
    int i;
    double n, max , min ;
    
    printf("Diga a quantidade de numeros: ");
    scanf("%d",&i);

    scanf("%lf", &n);
    max = n;
    min = n;

    for(int x = 2;x <= i;x++){
        scanf("%lf",&n);

        if (n > max){
            max = n;
        }
        if (n < min){
            min = n;
        }
    }
    printf("min: %lf, max: %lf\n", min, max);
    return 0;
}