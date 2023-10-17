
#include <stdio.h>

#define DIM 100

int leLinha(char s[]){
    int i;
    char c;
    
    c = getchar();
    for(i = 0; i < DIM-1  && c != EOF && c != '\n' && c != ' '; i++){
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;
}

int main()
{   
    char s1[DIM], s2[DIM];
    int i, size;
    
    size = leLinha(s1);
    leLinha(s2);
    for(i = 0; i <= size; i++){
        if (s1[i] > s2[i]){
            printf("%s", s1);
            break;
        }
        else if (s2[i] > s1[i]){
            printf("%s", s2);
            break;
        }
    }
    return 0;
}