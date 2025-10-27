
#include <stdio.h>

int leLinha(char s[]){
    
    int i=0; 
    char c;
    while ((c=getchar())!='\n' && c!=EOF){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i; 
}

void maiusculas(char s[]){
    int i=0, palavraNova=1;

    while(s[i]!='\0'){
        if (palavraNova && s[i]>='a' && s[i]<='a'){
            s[i]=s[i]-32; 
        }
        palavraNova=(s[i]==' ');
        i++;
    }
}

int main(){
    char s[80];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
    return 0;
}