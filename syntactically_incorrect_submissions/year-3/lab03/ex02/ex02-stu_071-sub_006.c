
#include<stdio.h>
#define minimo 2

void piramide(int N){
int l, c ; 
for (l = 0 ; l<N ; l++){
    for ( c= 0; c < N -l -1  ; c++){        

        printf(" ",);
        for(c = 0 ; c< l + 1 ; c ++){

            if (c) putchar(' ');
            printf("%d" , c+1 );
        }
        for (c=0 ; c< )


        }
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
piramide (N);

return 0 ;

}
