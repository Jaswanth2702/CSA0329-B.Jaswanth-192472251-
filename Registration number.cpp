#include <stdio.h>

int main() {
    int reg[100], n, i, key, found = 0;
    printf("Enter the number of registration numbers: ");
    scanf("%d", &n);
    printf("Enter the registration numbers (starting with 1924):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &reg[i]);
    }
    printf("Enter the registration number to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(reg[i] == key) {
            found = 1;
            break;
        }
    }
     if(found)
        printf("Registration number %d found at position %d\n", key, i + 1);
    else
        printf("Registration number %d not found\n", key);

    return 0;
}

