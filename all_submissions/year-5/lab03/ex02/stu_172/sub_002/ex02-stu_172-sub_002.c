
#include <stdio.h>

void tabs(int n){
    int i;
    for (i=0;i<n;i++)
        putchar('\t');
}

void piraminde(int height){
    int tab,to_sum,level,increment;
    for(tab=(height-1);tab>=0;tab--){
        tabs(tab);
    }
}