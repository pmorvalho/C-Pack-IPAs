
#include  <stdio.h>

int main(void){
    int n;
    int div = 1;

    scanf("%d",&n);
    for( int i = 2; i <= n; i++){
        if ( (n % i) == 0){
            div++;
        }
    }
    printf("%d\n",div);



    return 0;
}