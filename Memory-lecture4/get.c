#include <stdio.h>

int main(void)
{
    char s[4];
    // alternatively loop mallocing to allocate the actual required length of user input
    printf("s: ");
    scanf("%s", s);

    printf("s: %s\n", s);
}
