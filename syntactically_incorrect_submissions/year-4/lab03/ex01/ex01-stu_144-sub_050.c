
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    if(N < 2){
        return 1;
    }
    quadrado(N);
    return 0;
}

void quadrado(int N){
        int matrix[N][N];      
        int ln = 1 ;           
        int cl = 1 ;           
        int i = 0;
        int j = 0;
                              
        while(i < N){
            while(j < N){
                matrix[i][j] = 0;
                j++;
            }
            j = 0;
            i++;
        }

        i = 0;
        j = 0;
                                
                               
        while(i < N){         
            while(j < N){     
                matrix[i][j] = cl;
                printf("%d\t", matrix[i][j]);
                cl++;
                j++;
            }
            j = 0;
            ln++;
            matrix[i][j] = ln;
            cl = ln;
            cl++;
            printf("\n%d\t", matrix[i][j]);
            i++;
            j++;
        }
    }