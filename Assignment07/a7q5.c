/***
Write a function to accept five names of students from the user (use array of character
pointers). Write another function to print these names. Write a function to sort student names.
Finally write a function to free memory allocated for student names.***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 100


void acceptNames(char** names) {
    for (int i = 0; i < MAX_NAMES; i++) {
        names[i] = (char*)malloc(MAX_NAME_LENGTH * sizeof(char));
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void printNames(char** names) {
    printf("Student Names:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }
}

void sortNames(char** names) {
    char *temp;
    for (int i = 0; i < MAX_NAMES - 1; i++) {
        for (int j = i + 1; j < MAX_NAMES; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}


void freeNames(char** names) {
    for (int i = 0; i < MAX_NAMES; i++) {
        free(names[i]);
    }
    free(names);
}

int main() {
    char** names = (char**)malloc(MAX_NAMES * sizeof(char*));

    acceptNames(names);
    printf("\nUnsorted Names:\n");
    printNames(names);

    sortNames(names);
    printf("\nSorted Names:\n");
    printNames(names);

    freeNames(names);

    return 0;
}
