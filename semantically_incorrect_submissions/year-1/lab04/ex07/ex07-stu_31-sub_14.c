#include <stdio.h>
#include <string.h>
#define DIM 80
#define NOVA 80

void apagaCaracter(char s[], char c){
    int i,j;
    
    
    for (i = 0; s[i] != '\0';i++){
        if (s[i] == c)
            s[i] = ' ';
            
        }
    
    for (i = 0; s[i] != '\0';i++){
        if (s[i+1] != ' ')
        s[i] = s[i+1];
        else
            {s[i] = s[i+2];
                
            for (j = i; s[j] != '\0';j++)
                s[j] = s[j+1];
                
        }
    }

        


    

            
    

            
         

    }
    





int main() {
	int i,c;
	char s[DIM];
    c = getchar();
    for (i = 0; i < DIM-1 && c != EOF && c != '\n'; i++) {
        s[i] = c;
        c = getchar();}
    s[i] = '\0';
    c  = getchar();
    apagaCaracter(s,c);
    printf("%s\n", s);
    
    

   

    
    return 0;
}
