#include <stdio.h>

#define MAX 100

long transnum(char s[]);
int pot(int e);

int main(){
    char s1[MAX], s2[MAX];
    long soma, n1 = 0, n2 = 0;

    scanf("%s%s", s1, s2);

    n1 = transnum(s1);
    n2 = transnum(s2);

    soma = n1 - n2;

    if (soma > 0)
        printf("%s\n", s1);
    else
        printf("%s\n", s2);
    
    return 0;
}

long transnum(char s[]){              
    int i, comp = 0, alg;
    long num = 0;

    for(i=0; s[i] != '\0'; i++)
        comp++;

    for(i=0; s[i] != '\0'; i++){
        if(s[i] == '0')
            num = num*10;
        else{
            alg = s[i] - '0';
            num = num +  (alg * pot(comp));
            comp--;}
    }
    return num;  
}

int pot(int e){
    int p = 1, b = 10;
    if(e == 0)
        return 1;
    else{
    while(e > 0){
        p = p*b;
        e--;
        }
    }
    return p;
}


