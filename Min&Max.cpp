#include <stdio.h>

int main() {
    int arr[100], n, i;
    int min, max; 
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    min = arr[0];
    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}

