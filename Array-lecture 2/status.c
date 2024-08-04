#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0;
    }
}
// command line argument
// cowsay saysomething
// cowsay -f duck saysomething
// echo $?

// cryptography
// plaintext, key -> |_cipher_| -> ciphertext 
// ceaser-cipher