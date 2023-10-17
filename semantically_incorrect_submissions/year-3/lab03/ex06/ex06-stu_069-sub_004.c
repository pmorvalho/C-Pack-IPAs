
#include <stdio.h>
int main(){
    int n;
    long cont;
    cont = 0;
    scanf("%d", &n);
    
    while(n > 0){
        cont += n % 10;
        n = n / 10;
    }
    if(cont % 9 == 0){

        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;

}