#include <stdio.h>
#define MAX 80

int function(char frase[]);
void apaga(char frase[],char c);


int main(){
    
    char c;
    char frase[MAX];
    
    scanf("%c",&c);
    function(frase);
    apaga(frase,c);  
    
    printf("%s\n",frase);


return 0;

}
void apaga(char frase[],char c){
    int i=0;
    int j=0;

    for(i=0;i!='\0';i++){
        if (frase[i]==c){
            frase[i]=frase[j];
            j++;
        }
    } 
    frase[j]='\0';
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