
#include <stdio.h>

#define true 1
#define false 0

int leLinha(char s[]){

    int c, i=0, slash=false;

    c = getchar();

    while ((c != EOF))
    {
        
        if (c == '\\')
        {
            slash = true;
        }

        if (slash && (c == 'n')){
            break;
        }else{
            slash = false;
        }
        

        s[i] = 'a';
        i++;
        putchar(c);
        c = getchar();
    }
    
    s[i] = '\0';

    return --i;

}

int main(){

    char s[80];
    int i;

    i = leLinha(s);

    return 0;
}