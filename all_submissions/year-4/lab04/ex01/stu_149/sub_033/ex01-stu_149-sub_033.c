
#include <stdio.h>
#define VECMAX 100 

void print_piramide(int array[VECMAX], int n) {
    int i,j;
    for (i=0;i<n;i++) {
        for (j=0;j<array[i];j++) {
            putchar('*');

        }
    }
}

int main() {
    int n,array[VECMAX],i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    print_piramide(array,n);
    return 0;
}