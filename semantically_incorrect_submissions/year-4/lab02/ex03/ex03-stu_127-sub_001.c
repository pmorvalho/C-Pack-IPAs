
#include <stdio.h>

int main() {


int N;
int M;
int rest;

printf(" introduza os valores de N e M \n");
scanf("%d %d", &N, &M);


rest = N%M;


if (rest == 0 ) {

    printf("\n >>yes \n\n");
}
else {

    printf("\n >>no \n");
}





return 0;  
}