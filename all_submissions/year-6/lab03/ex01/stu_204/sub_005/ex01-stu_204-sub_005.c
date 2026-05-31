


#include <stdio.h>

void quadrado(int n){

    for(int lin = 1; lin<= n; lin++){
        for (int col = lin; col <= (lin + (n-1)); col++){
            if (col ==(lin + n -1)) printf("%d", col );
            else printf("%d\t", col );
        }
        printf("\n");
    }
}


int main(){

    int n;    

    if (scanf("%d", &n)!= 1 || n<2) return 1;

    quadrado(n);
     
    return 0;

}