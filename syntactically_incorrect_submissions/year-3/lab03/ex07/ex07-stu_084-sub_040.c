
#include <stdio.h>
#define DENTRONUM 1
#define FORANUM 0
#define MENOS 2

int main(){
    int i, estado, res = 0;
    char c, op; 
    
    estado = FORANUM;

    while((c = getchar()) != '\n'){
        if (c == ' ' && estado == DENTRONUM){
            estado = FORANUM;
            continue;
        }
        else if(c == ' '){
            estado = DENTRONUM;
        }
        else if(c >= 48 && c <= 57 && op != MENOS && estado == DENTRONUM){
            res += (c - '0');
        }
    }
    return 0;
}