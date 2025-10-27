
#include <stdio.h>

int main () {
    char num[100];
    int i = 0, c;
    while((c = getchar()) != EOF){
        if(c>='0' && c<='9')
            num[i++] = c;
        else{
            if(i>0){
                num[i] = '\0';
            
                int j = 0;
                while(num[j] == '0' && num[j+1] != '\0')
                    j++;
                printf("%s", &num[j]);
                i = 0;
            }
            if(c == ' ')
                putchar(' ');
            if(c == '\n')
                putchar('\n');       
        }
    }
    return 0;
}