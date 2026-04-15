#include <stdio.h>

// Asks for path towards a file, then displays the contents found within
// that file
int explore_content() {
    char path[100], c;
    FILE* file;
    int count_a = 0;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    // Raise an error if file not found
    if (file == NULL) {
        printf("Error could not find: %s\n", path);
        return 1;
    }

    // Display contents
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);

        // Count the character 'a'
        if (c == 'a') {
            count_a++;
        }
    }

    printf("\n\n Total 'a' characters in file: %d", count_a);
    printf("\n");
    fclose(file);
    return 0;
}

int main(void) {
    explore_content();
}