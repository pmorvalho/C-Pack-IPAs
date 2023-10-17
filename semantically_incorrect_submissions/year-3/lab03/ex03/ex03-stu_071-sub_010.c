
#include <stdio.h>
#define minimo 2 
void cruz (int N ){
int l, c;

for (l=0 ; l<N ; l++){
    for (c=0 ; c<N ; c ++){
        if (l == c || (l+c)== N-1){
            putchar('*');
            
        }
        else {
            putchar('-');
           
        }
        
       
    }
    putchar('\n');
}
}

int main (){

int N;
scanf("%d", &N);
while ( N < minimo){
scanf("%d", &N);
}
cruz (N);

return 0 ;

}