

#include <stdio.h>

void piramide(int N){
    int l,c;
    for (l=0;l<N;l++) {
        for(c=0; c<N-l-1;c++) {
            printf("  ");
        }
        for(c=0; c<l;c++) {
            printf("%d", c+1);
        }
        printf("%d",l+1);

        for(c=0; c<l;c++) {
            printf("%d", l+1-1-c);

        putchar('\n');


        }
        
    }
}

int main() {
    int H;
    scanf("%d", &H);
    piramide(H);
    return 0;
}


