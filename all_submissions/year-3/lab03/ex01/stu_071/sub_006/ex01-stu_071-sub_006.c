
#include<stdio.h>
#define minimo 2
void quadrado ( int N){

int i, j ; 
for (i = 0 ; i<N ; i++){
    for ( j= 0; j < N ; j++){        

        printf("%d\t" , (1+i+j) );
    }

    printf("\n");
}
}

int main (){

int N;
scanf("%d", &N);
while ( N < minimo){
scanf("%d", &N);
}
quadrado (N);

return 0 ;

}
