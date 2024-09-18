/***Modify above program to accept source and target filenames as command line arguments**/
#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    if (src == NULL) {
        perror("Error opening source file");
        exit(1);
    }

    FILE *dst = fopen(destination, "w");
    if (dst == NULL) {
        perror("Error opening destination file");
        exit(1);
    }

    char line[1024];
    while (fgets(line, sizeof(line), src)) {
        fputs(line, dst);
    }

    fclose(src);
    fclose(dst);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    const char *source = argv[1];
    const char *destination = argv[2];

    printf("Copying %s to %s...\n", source, destination);
    copy_file(source, destination);
    printf("Copy complete.\n");

    return 0;
}

