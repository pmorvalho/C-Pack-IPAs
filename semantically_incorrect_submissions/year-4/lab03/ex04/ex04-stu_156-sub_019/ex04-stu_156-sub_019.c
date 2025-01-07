
#include <stdio.h>
#define DIM 100
#define ZERO 48
#define TRUE 1
#define FALSE 0

int main(void){
    int i, c;
    char s[DIM];
    int number = FALSE;
   


    c = getchar();

    for(i = 0;c != EOF  && i < DIM-1; i++){
        if(((c - ZERO) < 10) && ((c - ZERO) > 0)){ 
            s[i] = c;
            number = TRUE;
            
        }
        else if(c == ZERO && number){
            s[i] = c;
        }
        else if(number == FALSE && c == ' '){
            s[i] = '0';
            s[i+1] = ' ';
            i++;
        }
        else if(c == ' '){
            number = FALSE;
            s[i] = c;
        }
        else{
            i--;
            
        }
        c = getchar();
    }
    s[i] = '\0';
    printf("%s\n",s);
    return 0;
}








