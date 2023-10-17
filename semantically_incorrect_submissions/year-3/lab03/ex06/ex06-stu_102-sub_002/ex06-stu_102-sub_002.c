
#include <stdio.h>
    int digit(int N){
            return N >= '0' && N <= '9';
    }
    int main(){
    int c,aux=0;
    while ((c = getchar()) != EOF)
    {
        if (digit(c))
        {
            c = c - '0';
            aux = aux*10 + c;
        }
    }
    if (aux % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}