

#include <stdio.h>
#include <stdlib.h>

void counting_sort(int arr[], int n) {
    int i, min_val = arr[0], max_val = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] < min_val) min_val = arr[i];
        if(arr[i] > max_val) max_val = arr[i];
    }

    
    int shift = 0;
    if(min_val < 0) {
        shift = -min_val;
        for(i = 0; i < n; i++) {
            arr[i] += shift;
        }
        max_val += shift;
    }

    
    int count_size = max_val + 1;
    int* count = (int*)calloc(count_size, sizeof(int));
    for(i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for(i = 0; i < count_size; i++) {
        while(count[i]-- > 0) {
            arr[index++] = i;
        }
    }

    
    if(shift) {
        for(i = 0; i < n; i++) {
            arr[i] -= shift;
        }
    }

    free(count);
}

int main() {

    int arr[3];

    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    counting_sort(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}