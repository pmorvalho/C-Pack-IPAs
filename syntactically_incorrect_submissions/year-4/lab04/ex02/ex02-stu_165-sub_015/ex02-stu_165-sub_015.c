
#include <stdio.h>
#define VECMAX 100

int get_max(int n, int arr[VECMAX]) {
    int i = 0, max = 0;
    for (; i < n; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n, i, j, max, arr[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    max = get_max(n, arr);

    for (i = 0; i <= max; i++){
        for(j = 0; j < n; j++){
            putchar(arr[j] > 0 ? '*' : ' '); 
            arr[j]--;
        }
        putchar('\n');
    }


}