

#include <stdio.h>

void initialization(char *symbols, int num){
    for(int i = 1; i < num - 1; i++){
        symbols[i] = '-';
    }

    symbols[0] = '*';
    symbols[num - 1] = '*';
}

void printArray(char *symbols, int num){
    int i;
    for(i = 0; i < num - 1; i++){
        printf("%c ", symbols[i]);
    }
    printf("%c\n", symbols[i]);
}

void switching(char *symbols, char *symbols_aux, int i, int num){

    symbols_aux[i + 1] = symbols[i];
    symbols_aux[i] = symbols[i + 1];

    symbols_aux[num - 1 - i] = symbols[num - 2 - i];
    symbols_aux[num - 2 - i] = symbols[num - 1 - i];

    for(int j = 0; j < num; j++){
        symbols[j] = symbols_aux[j];
    }
}

int main(){

    int num;
    scanf("%d", &num);

    char symbols[num], symbols_aux[num];
    initialization(symbols, num);
    initialization(symbols_aux, num);

    for(int i = 0; i < num - 1; i++){
        printArray(symbols, num);
        switching(symbols, symbols_aux, i, num);
    }

    printArray(symbols, num);

    return 0;
}