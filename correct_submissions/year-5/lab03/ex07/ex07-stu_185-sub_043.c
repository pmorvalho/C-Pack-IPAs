
#include <stdio.h>
int main(){
    char c;
    int n = 0, n1 = 0;
    char operador = '+';
    while((c = getchar()) != '\n' && c != EOF){
        if (c >= '0' && c <= '9'){
            n = (n *10) + (c - '0');
        } else if (c == ' '){
            continue;
        } else {
            if (operador == '+') {  
                n1 += n;
            } else if (operador == '-') {  
                n1 -= n;
            } 
            operador = c;
            n = 0;
        }
    }
    if (operador == '+') {  
        n1 += n;
    } 
    else if (operador == '-') {  
        n1 -= n;
    }
    printf("%d\n", n1);
    return 0;
}