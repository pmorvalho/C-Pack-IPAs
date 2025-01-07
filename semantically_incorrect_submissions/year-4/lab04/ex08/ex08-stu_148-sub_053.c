
#include <stdio.h>

#define MAX_CHAR 100
#define CONTINUA 0
#define STOP 1

int main () {
    char num_1[MAX_CHAR], num_2[MAX_CHAR];
    int i, estado = CONTINUA;

    scanf("%s", num_1);
    scanf("%s", num_2);

    for(i = 0; estado == CONTINUA; i++) {
        if(num_1[i] > num_2[i]) {  
            printf("%s", num_1);
            estado = STOP;
        }
        else if (num_2[i] > num_1[i]) {
            printf("%s", num_2);
            estado = STOP;
        }
    }
    return 0;
}