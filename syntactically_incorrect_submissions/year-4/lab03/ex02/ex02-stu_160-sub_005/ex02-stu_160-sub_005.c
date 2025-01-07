
#include <stdio.h>

void print_spaces(int spaces_num){
    for(int i = 1; i < spaces_num; i++){
        printf(" ");
    }

}
void print_nums(int num){
    int num_copy = num;
    for (int i = 0; i < num; i++){
        printf("%d", i+1);
    }
    for (int j = num_copy-1; j > 0; j--){
        printf("%d", j);
    }

}

int main(){
    int N;
    scanf("%d",&N);
    int spaces = N;
    for(int i = 0; i < N; i++){
        print_spaces(spaces);
        print_nums(i+1);
        print_spaces(spaces);
        spaces--;
        printf("\n");
        

    }

}
