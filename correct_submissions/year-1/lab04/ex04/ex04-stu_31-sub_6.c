#include <stdio.h>
#include <string.h>
#define DIM 80
int main() {
	int i,j,e;
	char palavra[DIM],nova_pal[DIM];
    scanf("%s", palavra);
    for (i = 0;palavra[i]!= '\0';++i)
    	j = j+1;
    i = i -1;
    for (e = 0;e<j;e++){
    	nova_pal[e] = palavra[i];
    	i = i - 1;
    }
    nova_pal[e] = '\0';
    if (strcmp(palavra,nova_pal) == 0)
    	printf("yes\n");
    else
    	printf("no\n");


   

    
    return 0;
}