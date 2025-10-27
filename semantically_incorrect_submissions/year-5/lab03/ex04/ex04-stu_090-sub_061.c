

#include <stdio.h>

int main(){
    char c;
    int i;
    int zero_counter = 0;
    int numero_nao_zero_counter = 0;
    while((c=getchar())!=EOF){
        if (zero_counter>0 && numero_nao_zero_counter>0){
            for(i=0;i<zero_counter;i++){
                printf("%c", '0');
            }
            printf("%c", c);
            if(c==' ')
                numero_nao_zero_counter=0;
            zero_counter=0;
            continue;
        }

        else if (zero_counter>0 && c==' '){
            printf("%c ", '0');
            zero_counter=0;
            numero_nao_zero_counter=0;
            continue;
        }

        else if (c==' '){
            printf(" ");
            numero_nao_zero_counter=0;
            zero_counter=0;
            continue;
        }

        else if (c=='0'){
            zero_counter+=1;
            continue;
        }
        else{
            numero_nao_zero_counter+=1;
            zero_counter=0;
            printf("%c", c);
        }    
    }
    if (zero_counter>0){
        for(i=0;i<zero_counter;i++){
                printf("%c", '0');
            }
    }
    printf("\n");
    return 0;
}