

#include <stdio.h>
#include <string.h>


void quadrado(int n);


int main() {
    int n;
    
    scanf("%d", &n);
    quadrado(n);
    
    return 0;
}

void quadrado( int n) {
    int i, j;
    char line[60]= "";
    char aux[10];
    
    for ( i = 1; i <= n; i++)
    {
        for (j = i; j < n + i; j++)
        {
            sprintf(aux, "%d\t",j);
            strcat(line,aux);
            
        }
        printf("%s\n", line);
        memset(line, 0, sizeof(line));
    }
     
}

