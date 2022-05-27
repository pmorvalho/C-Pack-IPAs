#include <stdio.h>
#define MAX 80

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


int main(){
    
    char frase[MAX];
    
    function(frase);

    printf("%s\n",frase);


return 0;

}