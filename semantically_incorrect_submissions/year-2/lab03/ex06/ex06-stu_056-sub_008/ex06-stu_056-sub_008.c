# include <stdio.h>

int main(){
    int n,soma=0;
    while ((n=getchar())!=EOF){
        int n1 =n-'0';
        soma=soma+n1;
    }
    if ((soma% 9)==0){
            printf("yes");
        }
        else
            printf("no");
    return 0;
}