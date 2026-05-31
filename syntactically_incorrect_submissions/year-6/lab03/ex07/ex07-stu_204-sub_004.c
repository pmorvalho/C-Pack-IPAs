


#include <stdio.h>

int main(){

    int resultado = 0;

    int op = '+';

    int n = 0;

    for(int c = getchar(); ; c = getchar()){

        if (c == '+'){ 
            op = '+';
            continue;
        }
        else if (c =='-'){ 
            op = '-';
            continue;
        }
        else if (c ==' '){
            if(op == '+') resultado += n;
            if(op == '-') resultado -= n;
            n = 0;
            continue;
        }
        else if (c == '\n'){
            if(op == '+') resultado += n;
            if(op == '-') resultado -= n;
            break;
        }
        else{
            int num = (c - '0');
            n = ((n*10) + num);
            continue;
        }
    }
    printf("%d\n", resultado);
    return 0;
}