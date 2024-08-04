#include <stdbool.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 30)
    {
        printf("meow\n");
        i++;
    }

    for (int i=0; i< 3; i++)
    {
        printf("meow\n");
    }
}