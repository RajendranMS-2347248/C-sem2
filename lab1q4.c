#include <stdio.h>
#include <string.h>

// Function to read and display n names
void readAndDisplayNames(char names[][50], int n) {
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    printf("Entered names:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %s\n", i + 1, names[i]);
    }
}


int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][50];

    readAndDisplayNames(names, n);

    return 0;
}
