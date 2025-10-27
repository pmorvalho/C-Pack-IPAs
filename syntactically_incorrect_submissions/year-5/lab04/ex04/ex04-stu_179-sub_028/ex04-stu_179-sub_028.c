

#include <stdio.h>
#include <string.h>


int main() {

    int i, cont=0;
    char inteira[100], metade1[50], metade2[50];

    scanf("%s", inteira);
    int tamanho = strlen(inteira); 

    
    if (tamanho % 2 == 0){ 

        int metade = tamanho / 2;
        for (i=0; i < metade; i++){
            metade1[i] = inteira[i];
       } 
       metade1[metade] = '\0'; 

       for (i = tamanho - 1; i >= metade; i--){
        metade2[cont] = inteira[i];
        cont ++;
       }
       metade2[cont] = '\0'; 
    }


    
    else{ 

        int metade = (tamanho + 1) / 2;
        for (i=0; i < metade; i++){
            metade1[i] = inteira[i];
        } 
        metade1[metade] = '\0'; 

        for (i = tamanho - 1; i >= metade-1; i--){
        metade2[cont] = inteira[i];
        cont ++;
        }
        metade2[cont] = '\0'; 
    }


    if (strcmp(metade1, metade2) == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

}