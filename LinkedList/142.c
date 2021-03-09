#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int visited;
    int data;
    struct Node *next;
};

struct Node *deleteloop(struct Node *head)
{
    //struct Node *ptr = head;
    head->visited = 0;

    while (head->visited < 1)
    {
        printf("%d\n", head->data);
        head->visited = head->visited + 1;
        if ((head->next)->visited = 1)
        {
            head->next = NULL;
        }
        else
        {
            head = head->next;
        }
    }
    return head;
}

void traversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 2;
    first->next = sec;

    sec->data = 3;
    sec->next = third;

    third->data = 4;
    third->next = forth;

    forth->data = 5;
    forth->next = third;

    struct Node * new=deleteloop(first);
    traversal(new);

    return 0;
}