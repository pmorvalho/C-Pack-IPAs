
#include <stdio.h>

void piramide(int N) {
  int i, j;
  
  for(i = 1; i <= N; i++) {
    
    for(j = 0; j <((N-i)*2); j++) {
      printf(" ");
    }  
    
    for(j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    
    for(j = i - 1; j > 0; j--) {
      printf("%d ", j);
    }  
    printf("\n");
  }

}
int main() {
  int N;

  scanf("%d", &N);
  piramide(N);
  
  return 0;
}