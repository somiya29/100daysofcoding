#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    scanf(" %[^\n]", str); 

 
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
