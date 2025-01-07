
#include <stdio.h>

#define VECMAX 100

void print_graph(int n){
    for(int i = 0; i<n; i++)    printf("*");
    printf("\n");
}

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    
    
    for (i = 0; i < n - 1; i++) { 
        
        
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
        
        
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

int main(){
    int n;
    scanf("%d", &n);
    if(n>VECMAX){
        return 0;
    }
    int vec[n];
    for(int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        vec[i]=num;
    }
    selectionSort(vec,n);
    for(int i = 0; i<n; i++){
        print_graph(vec[i]);
    }


}
