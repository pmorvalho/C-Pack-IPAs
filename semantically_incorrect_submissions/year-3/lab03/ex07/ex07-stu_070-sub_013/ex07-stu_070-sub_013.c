
#include <stdio.h>

#define ADD 0
#define SUBTRACT 1

int main()
{
    char c;
    int soma, res, opr;
    
    while ((c = getchar()) != '\n'){
        if ((c >= '0') && (c <= '9')){
            soma = 0;
            while ((c >= '0') && (c <= '9') && (c != ' ')){
                soma = soma*10 + c - 48;
                c = getchar();
            }
            if (opr == SUBTRACT)
                res -= soma;
            else
                res += soma;
        }
        else if (c == 43) 
            opr = ADD;
        else if (c == 45) 
            opr = SUBTRACT;
    }
    printf("%d\n", res);
    return 0;
}
