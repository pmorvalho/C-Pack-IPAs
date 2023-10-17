
#include <stdio.h>
#include <string.h>
#define DIM 100

void lelinha(char vec[]){
    char c;
    int i=0;
    while ((c=getchar())!= EOF && c!='\n')
    {
        vec[i]=c;
    }
    vec[i]='\n';
    vec[++i]='\0';
}

void vareraser(char vec[], char c){
    char vec2[DIM];
    int i,n,k;
    k=0;
    n=strlen(vec);
    for ( i = 0; i < n; i++)
    {
        if (vec[i]!=c)
        {
            vec2[k]=vec[i];
            k++;
        }
        
    }
    printf("%s",vec2);
}

int main(){
    char vec[DIM];
    char c;
    lelinha(vec);
    scanf("%c",&c);
    vareraser(vec,c);
    return 0;
}