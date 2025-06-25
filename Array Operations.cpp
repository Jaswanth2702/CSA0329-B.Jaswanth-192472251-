 #include <stdio.h>

int main() {
    int arr[100], n = 0, i, pos, value, choice, found;

    while(1) {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value: ");
                scanf("%d", &value);
                for(i = n; i > pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos] = value;
                n++;
                printf("Inserted %d at position %d\n", value, pos);
                break;

            case 2: 
                if(n == 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if(pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Deleted %d from position %d\n", arr[pos], pos);
                for(i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
                break;

            case 3: 
                printf("Enter value to search: ");
                scanf("%d", &value);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        printf("Element found at position %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("Element not found\n");
                break;

            case 4: 
                if(n == 0)
                    printf("Array is empty!\n");
                else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

