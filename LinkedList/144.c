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
        ptr = ptr->next;
    }
}
void removeduplicate(struct node *head)
{
    struct node *p = head;
    struct node *q ;
    while (p->next != NULL && p != NULL)
    {
        if (p->data == p->next->data)
        {
            q = p->next->next;
            if (q == NULL)
            {
                p->next = NULL;
                break;
            }
            p->next = q;
        }
       if (p->data != p->next->data)
        {
            p = p->next;
        }
    }
  
}

int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    first->data = 3;
    first->next = sec;

    sec->data = 3;
    sec->next = third;

    third->data = 4;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    traversal(first);
    printf("\n");
    removeduplicate(first);
    traversal(first);

    return 0;
}
