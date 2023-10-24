#include <stdio.h>

int main() {
    FILE *file; // File pointer
    file = fopen("example.txt", "w"); // Open file for writing

    if (file != NULL) {
        fprintf(file, "Hello, File!\n"); // Write text to file
        fclose(file); // Close the file
    } else {
        printf("Unable to open the file.\n");
    }

    return 0;
}
