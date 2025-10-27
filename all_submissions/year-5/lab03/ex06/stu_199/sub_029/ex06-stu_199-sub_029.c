

#include <stdio.h>


void divisivel_por_nove(int n){
    int soma = 0;
    while(n > 0){
        soma += n % 10;
        n /= 10;
    }
    if(soma % 9 == 0){
        printf("yes\n");
    } else{
        printf("no\n");
    }

}
int main(){
    int n;
    scanf("%d", &n);
    divisivel_por_nove(n);
    return 0;
}