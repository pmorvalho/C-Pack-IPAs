#include <stdio.h>

int main() {
    
    int numUm, numDois, numTres;

    printf("Enter three numbers: ");
    scanf("%d", &numUm);
    scanf("%d", &numDois);
    scanf("%d", &numTres);

    if (numUm > numDois && numUm > numTres) {
        printf("Maximum number is: %d\n", numUm);
    } else if (numDois > numTres) {
        printf("Maximum number is: %d\n", numDois);
    } else {
        printf("Maximum number is: %d\n", numTres);
    }

    return 0;
}
