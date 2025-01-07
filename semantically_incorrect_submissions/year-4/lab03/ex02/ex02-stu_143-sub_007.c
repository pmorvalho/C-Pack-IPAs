
#include <stdio.h>

int main(){

    int N;
    void piramide();

    scanf("%d", &N);
    piramide(N);

    return 0;

}

void piramide(int N){

    int i, incial = 1;
    
    while (incial <= N)
    {
    
        for(i = 0; i < (N-incial)*2; i++)
            printf(" ");

        for(i = 1; i <= incial; i++)
            printf("%d ", i);
        
        for(i -= 2; i > 0; i--)
            printf("%d ", i);
    
        for(i = 0; i < (N-incial)*2; i++)
            printf(" ");
        printf("\n");
        incial++;
    }
    
}