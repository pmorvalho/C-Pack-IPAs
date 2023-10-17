
#include<stdio.h>
#define minimo 2
void quadrado ( int N){

int i, j ; 
for (i = 1 ; i<=N ; i++){
    for ( j= i; j <= i + N-1 ; j++){       

        printf("%d\t" , j );
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
