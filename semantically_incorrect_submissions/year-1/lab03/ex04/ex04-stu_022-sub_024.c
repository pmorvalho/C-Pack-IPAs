#include <stdio.h>
#define SIM 0
#define NAO 1

int main(){
    int c, ultima, num = NAO, zeros = SIM;
    
    while((c = getchar()) != EOF){

        if((c > '0' && c <= '9') || (c == '0' && num == SIM)){  
            putchar(c);
            num = SIM;
            zeros = NAO; }
        else if ((c < '0' || c > '9') && zeros == SIM && ultima == '0'){
            printf("0");               
            putchar(c);
            ultima = c; }
        else if (c < '0' || c > '9'){    
            putchar(c);
            num = NAO;
            ultima = c;
            zeros = SIM; }
        else if (c=='0')           
            ultima = '0';         
        }
    return 0;
}