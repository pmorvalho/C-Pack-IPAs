#include <stdio.h>
#include <string.h>
#define DIM 80
#define NOVA 80

void maiusculas(char s[]){
    int i;
    for (i = 0; s[i] != '\0';i++){
        if (s[i] >= 'a'&& s[i]<='z')
            s[i] = s[i] - 'a' + 'A';}
    }





int main(){
	int i,c;
	char s[DIM];
    c = getchar();
    for (i = 0; i < DIM-1 && c != EOF && c != '\n'; i++) {
        s[i] = c;
        c = getchar();}
    s[i] = '\0';
    maiusculas(s);
    printf("%s\n", s);
    
    

   

    
    return 0;
}

