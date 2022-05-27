#include <stdio.h>

#define SUB 1
#define ADD 0

int main(){
    int soma = 0, num = 0, op = 0;
    char last, c;

    while((c = getchar()) != EOF){
    
        if(c >= '0' && c<= '9'){
            num = (num*10) + (c - '0');
            last = c;
        }
        else if (c == ' ' || last == ' ' || c == '\n'){
            if ((last >= '0' && last <= '9') && op == ADD)
                soma = soma + num;
            
            else if ((last >= '0' && last <= '9') && op == SUB)
                soma = soma - num;
            
            else if (last == ' ' && c == '+'){
                op = ADD;
                num = 0;
            }
            else if (last == ' ' && c == '-'){
                op = SUB;
                num = 0;
            }
            last = c;
        }
    }
    printf("%d\n", soma);
    return 0;
}