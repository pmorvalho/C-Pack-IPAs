
#include <stdio.h>
#define LAST 1

void piramide(int lines);

void piramide(int lines){
    int i, ant;
    int printed_lines;
    int numup, numdown;

    for(printed_lines = 1; printed_lines <= lines; printed_lines++){
        ant = 0;
        for(i = 1; i <= lines - printed_lines; i++)
            printf("  ");
        for(numup = 1; numup <= printed_lines; numup++)
            if(printed_lines == 1)
                printf("%d\n", LAST);
            else{
                printf("%d ", numup);
                ant = numup;
            }
        for(numdown = numup - 2; numdown >= 1; numdown--)
            if(ant == 2)
                printf("%d\n", LAST);
            else{
                printf("%d ", numdown);
                ant = numdown;
            }
    }
}

int main(){

    int lines;

    scanf("%d", &lines);

    piramide(lines);
   
    return 0;
}

