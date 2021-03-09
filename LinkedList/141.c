#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

bool detectloop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head->next;
    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL || slow == NULL)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}
struct Node traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
            
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

    
    printf("%d",detectloop(first));


    return 0;
}