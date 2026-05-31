
#include <stdio.h>
#define NUM 0
#define OP 1
#define SPACE 2

int main(){
    int c, estado=0, total=0, i=0;
    char op = '+';
    while ((c=getchar())!='\n'){
        if (estado == NUM){
            if (c>='0' && c<='9')
                i = i*10 + c - '0';
            else if (c == ' '){
                if (op == '+')
                    total+=i;
                else if (op == '-')
                    total-=i;
                estado = SPACE;
            }
        }
        else if (estado == OP){
            if (c == '+' || c == '-') {
                op = c;
            } 
            else if (c == ' ') {
                estado = SPACE;
            }
        }
        else if (estado == SPACE){
            i=0;
            if (c>='0' && c<='9'){
                estado = NUM;
                i = c - '0';
            }
            else if (c=='+' || c=='-'){
                estado = OP;
                op = c;
            }
        }
    }
    if (estado == NUM) {
        if (op == '+') total += i;
        else if (op == '-') total -= i;}
    printf("%d\n",total);
    return 0;
}