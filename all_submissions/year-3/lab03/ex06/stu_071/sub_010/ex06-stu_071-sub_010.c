
#include<stdio.h>
int main(){
int primo , n , i, j , k , l =  0;
scanf("%d" , &n);
for (i = 1 ; i<= n  ; i++){
    for ( j= 1 ;  j <= i ; j++){
        k = i % j ;
        if ( k == 0 ){
            l++;
        }
        if(l<=2){
            primo = i;
            printf("%d\n", primo );   
        }
    }

}


    return 0 ;
}