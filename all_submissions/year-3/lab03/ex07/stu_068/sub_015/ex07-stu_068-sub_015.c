


#include <stdio.h>

int its_prime(int n){
    int i = 1, contador = 0;
    
    while (i <= n){
        if (n%i == 0)
            contador +=1;
        i++;
    }
    if (contador == 2)
        return 1;
    
    return 0;
}


int main(){

    int n, v = 1;
    scanf("%d", &n);
    while (v <= n){
        if (its_prime(v))
            printf("%d\t", v);
        v++;
    }
    
    return 0;
    


}