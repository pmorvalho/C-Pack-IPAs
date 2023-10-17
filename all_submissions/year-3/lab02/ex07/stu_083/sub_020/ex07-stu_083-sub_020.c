
#include <stdio.h>

int main(){
    int n, contador, i;
    contador=1;
    scanf("%d",&n);
    for(i = 2; i <= n; i++)
    {
        if (n%i==0)
        {
            contador++;
        }
        
    }
    printf("%d\n", contador);
    return 0;
}
