
#include <stdio.h>

int main(){
    char c;
    while ((c=getchar())!=EOF)
    {
        if (c=='"')
        {
            while((c=getchar())!='"'){
                if(c=='\\'){
                    c=getchar();
                    printf("%c",c);
                }
                else{
                    printf("%c",c);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}