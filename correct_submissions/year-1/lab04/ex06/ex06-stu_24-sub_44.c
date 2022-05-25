#include <stdio.h>
#define MAX 80

int function(char frase[]);
void maiusculas(char frase[]);


int main(){
    
    char frase[MAX];
    
    function(frase);
    maiusculas(frase);
    
    printf("%s\n",frase);


return 0;

}

int function(char frase[]){
    int c;
    int i=0;

    while((c=getchar())!='\n' && c!=EOF && i<MAX){
        frase[i]=c;
        i++;
    }
    frase[i]='\0';

return i;
}

void maiusculas(char frase[]){
    int i=0;

    for(i=0;frase[i]!='\0';i++){
        if('a'<=frase[i] && frase[i]<='z'){
            frase[i]-=32;
        }
    }
}






