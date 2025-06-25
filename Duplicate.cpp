#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements to the left
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;    // Reduce size of array
                j--;    // Check the new element at position j
            }
        }
    }

    // Print array after removing duplicates
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

