
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

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
            i++;
        }

        i = 0;
        j = 0;
                                
                               
        while(i < N){         
            while(j < N){     

                matrix[i][j] = cl;
                printf("%d\t", matrix[ln][cl]);
                cl++;
                j++;
            }
            j = 0;
            ln++;
            cl = ln;
            matrix[i][j] = cl;
            printf("\n%d\t", matrix[ln][cl]);
            i++;
        }
    }
    
    quadrado(N);
    return 0;
}