#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char* argv[])
{
    node* list = NULL;

    for(int i = 1; i < argc; i++)
    {
        // convert the string argument to int
        int number = atoi(argv[i]);

        // create a linked list with the argument
        node* n = malloc(sizeof(node));
        if (n == NULL)
        {
            // *free up any alreagy created list before returning 1
            return 1;
        }
        n->number = number;
        n->next = NULL;

        n->next = list;
        list = n;
    }

    // print the content of the list
    for (node* ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // free up the allocated memory
    node* ptr = list;
    ptr = list;
    while(ptr != NULL)
    {
        node* next = ptr->next;
        free(ptr);
        ptr = next;
    }
}

