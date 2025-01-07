
enum state {FORA, NUM, SOMA, DIF};
#include <stdio.h>

int main(){
    int soma_temp = 0, soma_final = 0;
    char c;
    enum state st = FORA, sinal = SOMA;

    while ((c = getchar()) != EOF) {
        if (st == FORA) {
            if (c >= '0' && c <= '9'){
                soma_temp += (c - 48);
                st = NUM;
            }else if (c == '+'){
                sinal = SOMA;
            } else if (c == '-')
                sinal = DIF;
        } else if (st == NUM) {
            if (c >= '0' && c <= '9') {
                soma_temp = (soma_temp * 10) + (c - 48); 
            } else if (c == ' '|| c == '\n'|| c == EOF){
                if (sinal == SOMA){
                    soma_final += soma_temp;  
                    st = FORA;  
                } else if (sinal == DIF){
                    soma_final -= soma_temp;    
                    st = FORA;
                }
                soma_temp = 0;
            }
        } 
    }
    printf("%d\n", soma_final);
    return 0;
}