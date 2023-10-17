
#include <stdio.h>
 int main(){
    char c;
    int inicio=1;
    while ((c=getchar())!=EOF)
    {
        if (c=='0' && inicio==1)
        {
            while ((c=getchar())=='0')
            {
            }
            putchar(c);
            inicio=0;
        }
        else if (c==' '|| c=='\n')
        {
            putchar(c);
            inicio=1;
        }
        else{
            putchar(c);
            inicio=0;
        }
        
    }
    return 0;
 }