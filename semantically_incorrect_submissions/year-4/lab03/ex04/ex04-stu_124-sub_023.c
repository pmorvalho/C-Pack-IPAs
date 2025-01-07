
#include <stdio.h>
#include <string.h>
#define DIM 100

int main(){
    char ant, atu;
    int cnt, i;  
    cnt = 0;
    ant = ' ';
    atu = getchar();
    for (i = 0; atu != EOF; i++){

        if (i != 0 && (cnt == 0 || (cnt >= 1 && (atu == ' '||atu == '\n')))){
            printf("%c", ant);   
        }
        if (atu == '0' && ant == ' '){
            cnt++;
        }
        else if(cnt >= 1 && atu == '0'){
            cnt++;
        }
        else{
            cnt = 0;
        }    
        ant = atu;
        atu = getchar();
        if (atu == EOF) printf("\n");
    }
    
    return 0;
}
    
    
    
    
    

