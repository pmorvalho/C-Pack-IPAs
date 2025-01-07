
#include <stdio.h>

int main() {

    int numeroUm, numeroDois;
    scanf("%d",&numeroUm);
    scanf("%d",&numeroDois);

    if (numeroUm % numeroDois == 0) {
        printf("yes\n"); }
    else {
        printf("no\n");
    }
    return 0;
}