
#include <stdio.h>

int main () {
    int cont;
    int num;
    int numdigitos;


    scanf("%d", &num);

    
    if (num/1<10 && num/1>=1) {
        numdigitos = 1;
    }
    else if (num/10<10 && num/10>=1) {
        numdigitos = 2;
    }
    else if (num/100<10 && num/100>=1) {
        numdigitos = 3;
    }
    else if (num/1000<10 && num/1000>=1) {
        numdigitos = 4;
    }
    else {
        printf("...");
    }

    printf("%d", numdigitos);





    return 0;
}