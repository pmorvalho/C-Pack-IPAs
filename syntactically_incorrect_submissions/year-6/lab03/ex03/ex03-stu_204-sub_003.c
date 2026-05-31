

#include <stdio.h>

void cruz(int N){

    int fora = 0, dentro = (N -2);

    while(dentro >= -1){

        for(int num = fora; num!=0; num--) printf("- ");
    
        if(dentro == -1){
            printf("*");
        }

        else{

        printf("*");

        for(int num = dentro; num!=0; num--) printf(" -");

        printf(" *");
        }

        
        for(int num = fora; num!=0; num--)printf(" -");
    
        if(dentro == -1){
            printf("\n");
            break;
        }
    
        dentro-= 2;
        fora += 1;
        printf("\n");
    
    }

    dentro += 2;
    fora -=1;

    while(dentro<= (N-2)){

        for(int num = fora; num!=0; num--) printf("- ");

        printf("*");

        for(int num = dentro; num!=0; num--) printf(" -");

        printf(" *");

        for(int num = fora; num!=0; num--) printf(" -");
    
        printf("\n");

        dentro+= 2;
        fora -= 1;
    }
    
}

int main(){

    int N;
    if (scanf("%d", &N)!=1) return 1;
    cruz(N);
    return 0;
}