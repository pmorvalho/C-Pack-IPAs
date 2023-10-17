
#include <stdio.h>
 int main(){
    char c,z;
    int inicio=1;
    while ((c=getchar())!=EOF)
    {
        if (c=='0' && inicio==1)
        {
            while ((c=getchar())=='0')
            {
                z=c;
            }
            if (z=='0' && (c==' '|| c=='\n' || c==EOF))
            {
                putchar(z);
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