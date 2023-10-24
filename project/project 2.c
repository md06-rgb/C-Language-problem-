#include <stdio.h>
#include <string.h>

int main() {
    char list[10][50];
    int count = 0;

    while (1) {
        int choice;
        printf("\nOptions:\n");
        printf("1. Display List\n");
        printf("2. Edit List Item\n");
        printf("3. Delete List Item\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current List:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, list[i]);
                }
                break;

            case 2:
                printf("Enter the index of the item you want to edit: ");
                int edit_index;
                scanf("%d", &edit_index);
                if (edit_index >= 1 && edit_index <= count) {
                    printf("Enter the new item: ");
                    scanf(" %[^\n]", list[edit_index - 1]);
                    printf("Item updated successfully!\n");
                } else {
                    printf("Invalid index. Please try again.\n");
                }
                break;

            case 3:
                printf("Enter the index of the item you want to delete: ");
                int delete_index;
                scanf("%d", &delete_index);
                if (delete_index >= 1 && delete_index <= count) {
                    for (int i = delete_index - 1; i < count - 1; i++) {
                        strcpy(list[i], list[i + 1]);
                    }
                    count--;
                    printf("Item deleted successfully!\n");
                } else {
                    printf("Invalid index. Please try again.\n");
                }
                break;

            case 4:
                printf("Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
