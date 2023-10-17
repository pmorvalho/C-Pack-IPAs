
#include <stdio.h>
int CharToInt(char K){
        int soma;
        switch (K)
        {
        case '0':
            soma=0;
            break;
        case '1':
            soma=1;
            break;
        case '2':
            soma=2;
            break;
        case '3':
            soma=3;
            break;
        case '4':
            soma=4;
            break;
        case '5':
            soma=5;
            break;
        case '6':
            soma=6;
            break;
        case '7':
            soma=7;
            break;
        case '8':
            soma=8;
            break;
        case '9':
            soma=9;
            break;
        default:
            break;
        }
        return soma;
}

int CharToNumber(char k){
    int contador=1;
    int resultado, i, n;
    char numeros[20];
    char c=k;
    resultado=0;
    numeros[0]=c;
    c=getchar();
    while (c!='\n' && c!=' ' && c!=EOF) 
    {
        numeros[contador]=c;
        contador++;
        c=getchar();
    }
    n=contador;
    for ( i = 0; i < n; i++)
    {
        resultado+=CharToInt(numeros[i])*10^contador;
        contador--;
    }
    return resultado;
}

int main(){
    char c;
    int soma=0;
    c=getchar();
    if (c>='0' && c<='9')
    {
        soma+=CharToNumber(c);
    }
    
    while ((c=getchar())!=EOF)
    {
        if (c=='+')
        {
            c=getchar();
            c=getchar();
            soma+=CharToNumber(c);
        }
        else if(c=='-'){
            c=getchar();
            c=getchar();
            soma-=CharToNumber(c);
        }
        
    }
    printf("%d\n",soma);
    
    return 0;
}