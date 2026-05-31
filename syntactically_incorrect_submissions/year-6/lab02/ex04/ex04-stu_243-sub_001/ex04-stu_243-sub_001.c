
#include <stdio.h> 

int main(){
    int N1, N2, N3, maior, meio, menor;
    scanf("%d %d %d",&N1, &N2,&N3);
    if
    (N1 > N2,
        maior = N1);
    else if (N1 < N3, 
        maior = N3);
    else 
        maior = N2;
    
    if (N1 < N2 && N1 < N3) 
    menor = N1;
    else if (N2 < N1 && N2 < N3)
    menor = N2;
    else 
    menor = N3;

    if (N1 == maior && N3 == menor)
    meio = N2;
    else if ( N1 == maior && N2 == menor)
    meio = N3;  
    else if ( N2 == maior &&  N1 == menor) 
    meio = N3;
    else if (N2 == maior && N3 == menor)
    meio = N1;
    else if ( N3 == maior && N1 == menor)
    meio= N2;
    else if ( N3 == maior && N2 == menor)
    meio = N1; 

    printf("%d %d %d",menor, meio, maior);
    return 0;      
}