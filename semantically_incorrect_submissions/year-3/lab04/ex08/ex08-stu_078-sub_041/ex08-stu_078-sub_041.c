

#include <stdio.h>

#define MAX_SIZE 100
#define IN 1
#define OUT 0

int space(int current);
void comparenumbers(int v1[], int v2[],int size);
enum state {NUM1, NUM2};

int main() {
    int number1[MAX_SIZE], number2[MAX_SIZE];
    int current, size = 0;
    enum state state = NUM1;

    while ((current = getchar()) != EOF) {
        switch (state) {
            case NUM1:
                number1[size] = current;
                size++;
                if (space(current)) {
                    size = 0;
                    state = NUM2;
                }
                break;

            case NUM2:
                number2[size] = current;
                size++;
        }
    }    
    comparenumbers(number1, number2, size);
    return 0;
}

int space(int current) {
    return current == ' ' || current == '\n';
}

void comparenumbers(int v1[], int v2[],int size) {
    int i = 0, j, cicle = IN;

    while ((i < size) && cicle) {
        if (v1[i] > v2[i]){
            for (j = 0; j < size; j++) 
                putchar(v1[j]);
            cicle = OUT;         
            }
        else if (v1[i] < v2[i]) {
            for (j = 0; j < size; j++)
                putchar(v2[j]);
            cicle = OUT;
            }
        i++;
    }
}