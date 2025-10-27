

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int i, contador=0;

    scanf("%s", s);
    int DIM=strlen(s);
    
    int meio=DIM/2;
    
    int j=0;

    for (i=DIM-1; i>=meio; i--){
        if (s[j]==s[i]){
            contador++;
        }
        j++;
    }
    
    if(DIM%2==0){
        if (contador==meio){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    else{
        if (contador==meio+1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }

    return 0;
}