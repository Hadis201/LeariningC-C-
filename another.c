#include<stdio.h>

int main() {
    int i;
    char temp;
    char array[3];  // Increase the size to 3

    for (i = 0; i < 3; i++) {
        scanf(" %c", &array[i]);  // Use & before array[i]
    }

    for (i = 0; i < 2; i++) {  // Change the loop condition
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;

        printf("%c", array[i]);
    }

    return 0;
}
