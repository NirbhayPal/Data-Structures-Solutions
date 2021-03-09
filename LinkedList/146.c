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

struct node * move_first_to_last(struct node * head){
    struct node * ptr1=head;
    struct node * ptr2=head->next;

    while (ptr2->next!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr2->next=head;
    ptr1->next=NULL;
    return ptr2;
}

int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    first->data = 3;
    first->next = sec;

    sec->data = 4;
    sec->next = third;

    third->data = 5;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    traversal(first);
    printf("\n");
    
    first=move_first_to_last(first);
    traversal(first);

    return 0;
}
