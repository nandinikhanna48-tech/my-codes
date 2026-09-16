#include <stdio.h>

int main() {
    int arr[100], n, search, i, found = 0;

    // User chooses the size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // User enters array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User chooses the number to search
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found\n");
    }

    return 0;
}
