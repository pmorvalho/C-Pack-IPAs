
#include <stdio.h>
#define MAX 80

int main(){
    char string[MAX];
    int i, cont, thegoodflag;
    cont = 0;
    thegoodflag = 1;
    scanf("%s", string);
    for (i = 0; i < MAX; i++){
        while (string[i] != '\0'){
            cont++;
        }
    }
    int tuah[cont];
    for (i=0; i<cont; i++){
        tuah[cont-i-1] = string[i];
    }
    for (i=0; i<cont; i++){
        if (tuah[i] != string[i]){
            thegoodflag = 0;
        }
    }
    if (thegoodflag == 0){
        printf("no\n");
    }
    else if (thegoodflag == 1){
        printf("yes\n");
    }
    return 0;
}