#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);

    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+5000000));

}
