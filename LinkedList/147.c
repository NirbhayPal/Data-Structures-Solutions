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

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    struct node *current = head;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

struct node *add_1ToLinkedList(struct node *head)
{
    struct node *new=(struct node *) malloc(sizeof(struct node));
    int carry = 1;
    int sum = head->data + carry;
    struct node *ptr = head;
    if (sum > 9)
    {
        ptr->data=0;
        ptr=ptr->next;
        ptr->data=0;
        if (ptr->next==NULL)
        {
            ptr->next = new; 
            new->data=1;
            new->next=NULL;
        }
        
    }
    return head;
}

int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    first->data = 9;
    first->next = sec;

    sec->data = 9;
    sec->next = third;

    third->data = 9;
    third->next = forth;

    forth->data = 9;
    forth->next = NULL;

    // first=reverse(first);
    traversal(first);
    first = reverse(first);
    first = add_1ToLinkedList(first);
    first = reverse(first);

    printf("\n");
    traversal(first);
    return 0;
}
