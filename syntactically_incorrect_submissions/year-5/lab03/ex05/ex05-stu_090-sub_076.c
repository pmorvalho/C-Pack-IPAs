



#include <stdio.h>

int main(){
    char c;
    int i;
    int ler_mensagem = 0;
    int escape_activated = 0;
    while((c=getchar())){
        if (escape_activated && (c=='"' || c== '\\')){
        printf("%c", c);
        escape_activated=0;
        continue;
        }

        else if (c=='"' && ler_mensagem==0){
            ler_mensagem=1;
            continue;
        }
        else if(c=='"' && ler_mensagem==1){
            ler_mensagem=0;
            printf("\n");
            continue;
        }
        else if (ler_mensagem==1 && c=='\\'){
            escape_activated = 1;
            continue;
        }
    
        else if(ler_mensagem==1){
            printf("%c", c);
        }
    }
    return 0;
}