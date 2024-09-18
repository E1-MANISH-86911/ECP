/***3. Write a function to read a file line by line and copy the contents to another file.*****/

#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    FILE *dst = fopen(destination, "w");

    if (src == NULL || dst == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char line[1024];
    while (fgets(line, sizeof(line), src)) {
        fputs(line, dst);
    }

    fclose(src);
    fclose(dst);
}

int main() {
    const char *source = "source.txt";
    const char *destination = "destination.txt";

    printf("Copying %s to %s...\n", source, destination);
    copy_file(source, destination);
    printf("Copy complete.\n");

    return 0;
}
