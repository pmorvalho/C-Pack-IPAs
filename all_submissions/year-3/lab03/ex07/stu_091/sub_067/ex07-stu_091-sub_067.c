
# include <stdio.h>

#define MAX 100

int main()
{
    char s[MAX];
    int i=0,g, total = 0 , num, gravar = 0;
    s[i] = getchar();

    for (i = 1; s[i] != EOF && s[i] != '\n' && i < MAX  ;i++)
        s[i] = getchar();

    s[i] = '\0';
    i = 0;
    while (s[i] != '\0')
    {
        gravar = 0;
        g = i;

        while (s[g] >='0' && s[g] <='9' && (s[g+1] != ' ' || s[g+1] != '\0'))
        {    
            num = (int)(s[g]);
            num -= 48;
            gravar = (gravar * 10) + num;   
            g++;
        }
        if (i == 0) 
            total += gravar;
        if (s[i-2] == '+')       
            total += gravar;
        if (s[i-2] == '-')      
            total -= gravar;
        i++;
    }
    printf("%d\n",total);
    return 0;
}
