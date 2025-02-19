#include <stdio.h>

int main() {
    int arr[100], size = 0, choice, element, position;

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) { // Insert
            printf("Enter element and position: ");
            scanf("%d %d", &element, &position);
            for (int i = size; i > position; i--) arr[i] = arr[i - 1];
            arr[position] = element;
            size++;
        } else if (choice == 2) { // Delete
            printf("Enter position: ");
            scanf("%d", &position);
            for (int i = position; i < size - 1; i++) arr[i] = arr[i + 1];
            size--;
        } else if (choice == 3) { // Display
            printf("Array: ");
            for (int i = 0; i < size; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 4) break; // Exit
        else printf("Invalid choice!\n");
    }

    return 0;
}
