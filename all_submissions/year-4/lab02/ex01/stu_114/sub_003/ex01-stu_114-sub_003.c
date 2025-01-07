#include <stdio.h>

int main() {
    
    int numUm, numDois, numTres;

    printf("Enter three numbers: ");
    scanf("%d", &numUm);
    scanf("%d", &numDois);
    scanf("%d", &numTres);

    if (numUm > numDois && numUm > numTres) {
        printf("%d", numUm);
    } else if (numDois > numTres) {
        printf("%d", numDois);
    } else {
        printf("%d", numTres);
    }

    return 0;
}
