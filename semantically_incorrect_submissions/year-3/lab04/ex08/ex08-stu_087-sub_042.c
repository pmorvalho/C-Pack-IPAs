
#include <stdio.h>
#define MAX 100


int main(){

    char n1[100], n2[100], c;
    int currentNum = 1, i=0, length;

    while ((c=getchar()) != EOF){

        if (((c == ' ') || (c == '\n')) && currentNum==1){
            currentNum = 2;
            n1[i] = '\0';
            i=0;
        }else{

            if (currentNum == 1)
                n1[i] = c;
            else
                if (c != '\n')
                    n2[i] = c;

            i++;

        }    

    }
    n2[i] = '\0';

    length = i;

    for(i = 0; i < length; i++){

        if(n1[i] > n2[i]){
            printf("%s\n", n1);
            break;
        }
        else if(n1[i] < n2[i]){
            printf("%s\n", n2);
            break;
        }

    }

    return 0;
}