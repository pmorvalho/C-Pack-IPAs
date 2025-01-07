#include <stdio.h>

int main() {
    
    int numUm, numDois, numTres;
    
    scanf("%d", &numUm);
    scanf("%d", &numDois);
    scanf("%d", &numTres);

    if (numUm > numDois && numUm > numTres) {
        printf("%d\n", numUm);
    } else if (numDois > numTres) {
        printf("%d\n", numDois);
    } else {
        printf("%d\n", numTres);
    }

    return 0;
}
