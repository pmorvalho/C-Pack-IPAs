
# include <stdio.h>

int main(){
    int c;
    int estado = 0;
    while ((c = getchar()) != EOF){
        if (estado == 0){
            if (c == '"'){
                estado = 1;
            }
        }
        else if (estado == 1){
            if (c == '\\'){
                estado = 2;
            }
            else if (c == '"'){
                putchar('\n');
                estado = 0;
            } 
            else{
                putchar(c);
            }
        }
        else if (estado == 2){
            putchar(c);
            estado = 1;
        } 
    }
    return 0;
}