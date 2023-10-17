
#include <stdio.h>
#define MAX 100


int main(){

    char n1[100], n2[100], c;
    int currentNum = 1, i=0, length, highest = 0;

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

        if((n1[i] > n2[i]) && highest==0){
            highest = 1;
        }
        else if((n1[i] < n2[i]) && highest == 0){
            highest = 2;
        }
        
        if(highest == 1){
            putchar(n1[i]);
        }else{
            putchar(n2[i]);
        }

    }
    printf("\n");

    return 0;
}