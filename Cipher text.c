#include <stdio.h>

int main() {
    char plaintext[100];
    char ciphertext[100];
    int i;

    // Get the plaintext from the user
    printf("Enter the plaintext: ");
    fgets(plaintext, 100, stdin);

    // Encode the plaintext
    for (i = 0; plaintext[i] != '\0'; i++) {
        ciphertext[i] = plaintext[i] + 3;
    }
    ciphertext[i] = '\0';

    // Output the ciphertext
    printf("The ciphertext is: %s\n", ciphertext);

    return 0;
}
