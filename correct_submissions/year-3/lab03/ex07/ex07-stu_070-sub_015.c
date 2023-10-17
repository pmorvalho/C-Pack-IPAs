
#include <stdio.h>

#define ADD 0
#define SUBTRACT 1

int main()
{
    char c;
    int soma, res, opr;
    
    while ((c = getchar()) != '\n'){
        if ((c >= '0') && (c <= '9'))
            soma = soma*10 + c - 48;
        else if (c == ' '){
            if (opr == SUBTRACT){
                res -= soma;
                soma = 0;
            }
            else{
                res += soma;
                soma = 0;
            }
        }
        else if (c == 43) 
            opr = ADD;
        else if (c == 45) 
            opr = SUBTRACT;
    }
    if (opr == SUBTRACT)
        res -= soma;
    else
        res += soma;
    printf("%d\n", res);
    return 0;
}
