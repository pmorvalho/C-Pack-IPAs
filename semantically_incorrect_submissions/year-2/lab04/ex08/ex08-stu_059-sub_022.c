#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX 100



int main(){

    char s1[MAX], s2[MAX];
    int i=0, n1,n2;
    char c;

    while ((c=getchar())!= '\n' && c != EOF){
        s1[i] = c;
        i++;
    }

    s1[i] = '\0';
    i=0;

    while ((c=getchar())!= '\n' && c != EOF){
        s2[i] = c;
        i++;
    }

    s2[i] = '\0';

    n1 = atoi(s1);
    n2 = atoi(s2);

    if (n1 > n2)
        printf("%d\n",n2);
    else
        printf("%d\n",n2);

    
        
    return 0;
}