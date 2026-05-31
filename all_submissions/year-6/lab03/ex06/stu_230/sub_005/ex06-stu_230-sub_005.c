
#include <stdio.h> 
 int main(){
    char str[101];
    int sum,i;
    sum=i=0;
    scanf("%s",str);
    while (str[i]!='\0'){
        sum+=str[i]-'0';
        i++;
    }
    printf("%s\n",sum%9==0?"yes":"no");
    return 0;
 }
