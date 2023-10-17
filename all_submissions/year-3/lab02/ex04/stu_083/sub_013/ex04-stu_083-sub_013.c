
 #include <stdio.h>
 int main(){
    int array[3];
    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    if(array[1]<=array[0]){
        if(array[2]<=array[1]){
            printf("%d %d %d\n",array[2],array[1],array[0]);
        }
        else if(array[2]<=array[0]){
            printf("%d %d %d\n",array[1],array[2],array[0]);
        }
        else{
            printf("%d %d %d\n",array[1],array[0],array[2]);
        }
    }
    else if(array[2]<=array[0]){
        printf("%d %d %d\n",array[2],array[0],array[1]);
    }
    else if(array[2]>=array[1]){
        printf("%d %d %d\n",array[0],array[1],array[2]);
    }
    else{
        printf("%d %d %d\n",array[0],array[2],array[1]);
    }
    return 0;
 }