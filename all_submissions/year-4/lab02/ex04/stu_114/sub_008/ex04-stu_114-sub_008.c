
#include <stdio.h>

int main () {

    int numUm,numDois,numTres;

    scanf("%d",&numUm);
    scanf("%d",&numDois);
    scanf("%d",&numTres);

    if (numUm < numDois) {
        if (numDois < numTres) {
            printf("%d %d %d\n",numUm,numDois,numTres);
            return 0;
        }

    }

    if (numUm > numDois) {
        if (numDois > numTres) {
            printf("%d %d %d\n",numTres,numDois,numUm);
        return 0;
        }

    }

    if (numDois < numUm) {
        if (numTres > numUm) {
            printf("%d %d %d\n",numDois,numUm,numTres);
            return 0;
        }

    }

    if (numDois > numUm) {
        if (numUm > numTres) {
            printf("%d %d %d\n",numUm,numTres,numDois);
            return 0;
        }

    }

    if (numDois < numUm) {
        if (numDois < numTres) {
            printf("%d %d %d\n",numDois,numTres,numUm);
            return 0;
        }

    }

    return 0;
}