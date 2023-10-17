
#include <stdio.h>
#define DIM 100
int main(){
    char c[DIM], k;
    int i, n, soma;
    soma=0;
    for ( i = 0; i < DIM && (k=getchar())!=EOF; i++)
    {
        c[i]=k;
    }
    for ( n = 0; n <= i; n++)
    {
        switch (c[n])
        {
        case '0':
            soma+=0;
            break;
        case '1':
            soma+=1;
            break;
        case '2':
            soma+=2;
            break;
        case '3':
            soma+=3;
            break;
        case '4':
            soma+=4;
            break;
        case '5':
            soma+=5;
            break;
        case '6':
            soma+=6;
            break;
        case '7':
            soma+=7;
            break;
        case '8':
            soma+=8;
            break;
        case '9':
            soma+=9;
            break;
        default:
            break;
        }
    }

    if (soma%9==0)
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    

    return 0;
}