#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int n = 5;  
    int element = 99;
    arr[n] = element; 
    n++; 
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


