
#include <stdio.h>

int main(){
    int c, op='+', num=0, operacao=0;

    c = getchar();

    while (c!='\n'){
        if (c>='0' && c<='9'){

            if (num==0){
                num = c-'0';
            } else if (c!=0){
                num = (num*10)+(c-'0');
            } else {
                num *=100;
            }
        }
        else if (c==' ') {
            if (op=='+'){
                operacao += num;
            }
            else if (op=='-'){
                operacao -= num;
            }
            num = 0;
        }

        else if (c=='+'){
            op = '+';
        } else if (c=='-'){
            op = '-';
        }

        c = getchar();

        if (c=='\n'){
            if (op=='+'){
                operacao += num;
            }
            else if (op=='-'){
                operacao -= num;
            }
        }
    }

    printf("%d\n", operacao);
    return 0;
}