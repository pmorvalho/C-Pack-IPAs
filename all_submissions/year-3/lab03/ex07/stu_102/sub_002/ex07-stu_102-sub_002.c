
#include <stdio.h>
int main(){
    int c,ini=0,res = 0,nr=0;
    c = getchar();
    while (c >= '0' && c <= '9')
            {
                ini = ini*10 + (c - '0');
                c = getchar();
            }

    while ((c = getchar())!= '\n')
    {
        if (c == '+')
        {
            c = getchar();
            c = getchar();
            while (c >= '0' && c <= '9')
            {
                nr = nr*10 + (c - '0');
                c = getchar();
            }
            if (ini != 0)
                res = ini + nr;
            else
                res += nr;
        }

        if (c == '-')
        {
            c = getchar();
            c = getchar();
            while (c >= '0' && c <= '9')
            {
                nr = nr*10 + (c - '0');
                c = getchar();
            }
            if (ini != 0)
                res = ini - nr;
            else
                res -= nr;
        }
        nr = 0;
        ini = 0;
    }
    printf("%d\n",res);
    return 0;
}