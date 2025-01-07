
#include <stdio.h>

int main() {


int A;
int B;
int C;
int maior;
int meio;
int menor;


printf("introduza os valores de A B e C\n");
scanf("%d %d %d", &A, &B, &C);


if (A>B && A>C) {
maior = A;

}
else if (B>A && B>C) {

    maior = B;
}
else {

    maior = C;
}


if (A>B && A<C || A<B && A>C) {

    meio = A;
}

else if (B>A && B<C || B>C && B<A) {

    meio = B;
}
else {
    meio = C;
}


if (A<B && A<C) {

    menor = A;
}
else if (B<A && B<C) {

    menor = B;
}
else {
    menor = C;
}


printf("%d ", menor);
printf("%d ", meio);
printf("%d ", maior);

    return 0;
}