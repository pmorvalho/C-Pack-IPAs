
#include <stdio.h>

int main(){

    void quadrado(int N){
        int matrix[N][N];      
        int ln = 1 ;           
        int cl = 1 ;           
        int counterln = 1;
        int countercl = 1;
                               
        while(counterln <= N){         
            while(countercl <= N){     

                printf("%d\t", &matrix[ln][cl]);
                cl++;
                countercl++;
            }
            ln++;
            cl = ln;
            printf("\n%d\t", &matrix[ln][cl]);
            counterln++;
        }
    }
    return 0;
}