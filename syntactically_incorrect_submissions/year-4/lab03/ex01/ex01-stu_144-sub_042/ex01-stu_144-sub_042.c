
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    void quadrado(int N){
        int matrix[N][N] = {{0}};      
        int ln = 1 ;           
        int cl = 1 ;           
        int counterln = 0;
        int countercl = 0;
                               
        while(counterln < N){         
            while(countercl < N){     

                matrix[ln][cl] = 0;
                printf("%d\t", matrix[ln][cl]);
                cl++;
                countercl++;
            }
            ln++;
            cl = ln;
            printf("\n%d\t", matrix[ln][cl]);
            counterln++;
        }
    }
    
    quadrado(N);
    return 0;
}