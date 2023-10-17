
#include <stdio.h>

void cruz(int N){


    int contador, i;

    for (contador = 1; contador <= N/2; contador++){            
        
            for (i = 1; i <= N; i++){           
                if (i == contador || i == ((N+1)-contador))
                    printf("* ");
                else
                    printf("- ");
            }
        printf("\n");

        }

    for (contador = ((N/2)+1); contador <= N; contador++){      

            for (i = 1; i <= N; i++){
                if (i == ((N+1)-contador) || i == contador)
                    printf("* ");
                else
                    printf("- ");

            }
        printf("\n");
    }
}

int main(){

    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}
