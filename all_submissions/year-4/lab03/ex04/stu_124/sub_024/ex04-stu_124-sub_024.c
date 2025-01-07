
#include <stdio.h>
#include <string.h>
#define DIM 100

int main(){
    char ant, atu;
    int cnt, i;  
    cnt = 0;
    for (i = 0; (atu = getchar()) != EOF && atu != '\n'; i++){
        if (atu == '0'){
            cnt++;
        }
        else{cnt = 0;}

        if (i != 0 && (ant != '0' || atu == ' ') && cnt <= 1){
            printf("%c", ant);   
        }
        ant = atu;
    }    
    printf("%c\n", ant);
    return 0;
}
    
    
    
    
    

