#include <stdio.h>
#include <string.h>
#define DIM 80
#define NOVA 80

int lelinha(char s[]);



int main(){
	int i,c;
	char s[DIM];
    c = getchar();
    for (i = 0; i < DIM-1 && c != EOF && c != '\n'; i++) {
        s[i] = c;
        c = getchar();}
    s[i] = '\0';
    printf("%s\n", s);
    i = lelinha(s);
    
    

   

    
    return 0;
}

int lelinha(char palavra[]){
int i = 0;

while (palavra[i] != '\0'){
    
    i = i + 1;}
return i;
}
