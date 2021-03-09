#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    // struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }
}
int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    first->data = 2;
    first->next = sec;

    sec->data = 3;
    sec->next = third;

    third->data = 4;
    third->next = forth;

    forth->data = 5;
    forth->next = NULL;

    // first=reverse(first);
    traversal(first);
    
    return 0;
}
