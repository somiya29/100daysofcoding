#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    
    while(str[i] != '\0') {
        i++;
    }
    int length = i;

    
    for(i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

