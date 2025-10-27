
#include <stdio.h>

int main(){;
    int cont, looper, Num[100], i;
    cont = 0;
    for (i = 0; i < 100; i++){
        Num[i] = getchar();
    }
    for(looper = 0; looper < 100; looper++){
        if (Num[looper] == '1'){
            cont += 1;
        }
        if (Num[looper] == '2'){
            cont += 2;
        }
        if (Num[looper] == '3'){
            cont += 3;
        }
        if (Num[looper] == '4'){
            cont += 4;
        }
        if (Num[looper] == '5'){
            cont += 5;
        }
        if (Num[looper] == '6'){
            cont += 6;
        }
        if (Num[looper] == '7'){
            cont += 7;
        }
        if (Num[looper] == '8'){
            cont += 8;
        }
        if (Num[looper] == '9'){
            cont += 9;
        }
    }
    if (cont % 9 == 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}