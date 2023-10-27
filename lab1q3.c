#include <stdio.h>

// Function to read and display a string
void readAndDisplayString(char *str) {
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Entered string: %s\n", str);
}

// Function to calculate string length
int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse a string
void reverseString(char *str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to copy one string into another
void copyString(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Add the null character to terminate the destination string.
}

// Function to count the number of times a character is repeated in a string
int countCharacter(char *str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    char copyStr[100];
    char searchChar;
    int length;

    readAndDisplayString(str);

    length = stringLength(str);
    printf("Length of the string: %d\n", length);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    copyString(copyStr, str);
    printf("Copied string: %s\n", copyStr);

    printf("Enter a character to search: ");
    scanf(" %c", &searchChar);
    int count = countCharacter(str, searchChar);
    if (count > 0) {
        printf("The character '%c' is present %d times in the string.\n", searchChar, count);
    } else {
        printf("The character '%c' is not present in the string.\n", searchChar);
    }

    return 0;
}
