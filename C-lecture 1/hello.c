#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string username = get_string("what is your name? ");
    printf("hello, %s\n", username);
}