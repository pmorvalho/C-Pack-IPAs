
#include <stdio.h>
#include <string.h>
#define VECMAX 100

void apaga(char vec[],char ch);

int main(void){
    char line[VECMAX],ch;

    fgets(line,VECMAX,stdin);
    ch = getchar();
    apaga(line,ch);
    printf("%s",line);
    return 0;
}

void apaga(char vec[],char ch){
    int i;
    int j = 0;
    for(i=0;vec[i];i++){
        if(vec[i] != ch){
            vec[j++]=vec[i];
        }
    }
    vec[j]='\0';
    return;
}
