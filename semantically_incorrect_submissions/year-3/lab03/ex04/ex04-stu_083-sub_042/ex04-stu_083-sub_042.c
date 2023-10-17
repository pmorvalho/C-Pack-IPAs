
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
            inicio=0;
        }
        else if (c==' '|| c=='\n')
        {
            putchar(c);
            inicio=1;
        }
        else{
            putchar(c);
        }
        
    }
    return 0;
 }