#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

int main() {
    // Function pointers for both functions
    void (*to_uppercase)(char *);
    void (*to_lowercase)(char *);

    // Load the shared library
    void *handle = dlopen("libconvert.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error loading library: %s\n", dlerror());
        return 1;
    }

    // Get function addresses
    to_uppercase = dlsym(handle, "to_uppercase");
    to_lowercase = dlsym(handle, "to_lowercase");

    if (!to_uppercase || !to_lowercase) {
        fprintf(stderr, "Error loading functions: %s\n", dlerror());
        dlclose(handle);
        return 1;
    }

    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline character

    int choice;
    printf("Choose an operation:\n1 - Uppercase\n2 - Lowercase\nYour choice: ");
    scanf("%d", &choice);
    getchar(); // Remove the newline left by scanf

    if (choice == 1) {
        to_uppercase(text);
        printf("Result: %s\n", text);
    } else if (choice == 2) {
        to_lowercase(text);
        printf("Result: %s\n", text);
    } else {
        printf("Invalid choice!\n");
    }

    // Close the shared library
    dlclose(handle);
    return 0;
}
