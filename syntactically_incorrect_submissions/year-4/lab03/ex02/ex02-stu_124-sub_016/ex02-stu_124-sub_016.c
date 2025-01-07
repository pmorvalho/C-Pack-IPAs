
#include <stdio.h>

void piramide(int N){
    int col, lin, cont_esp, verf;
    col = 1;
    verf = 0; 
    
    char spc = ' ';
    for (int i = 1 ; i <= N ; i++){
        lin = 1;
        cont_esp = 2 * N - 2 * i;
        while (cont_esp > 0){
            printf("%c", spc);
            --cont_esp;
        }
        while (lin <= 3){
          
            if (col == 1 && verf == 0 && i != 1){
                while (col < i){
                    printf("%d ", col);
                    col++;
                }    
            }
            else if(col == 1 && verf == 1){
                printf("%d\n", col);
                verf = 0;
            }
            else if(col == i && i != 1){
                verf = 1;
                while (col > 1){
                    printf("%d ", col);
                    col--;
                }  
            }
            else {
                printf("%d\n", col);
                break;
            }
            lin++;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

