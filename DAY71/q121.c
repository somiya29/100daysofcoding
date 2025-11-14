#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Taking input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Writing to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
