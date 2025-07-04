 #include <stdio.h>

int main() {
    int arr[100], n, i, key, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            return 0;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Element %d not found in the array.\n", key);
    return 0;
}

