
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void reverseArrayLinkList(struct Node *head);
struct Node *linkList(int a[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}



int main()
{
    int a[] = {1, 2, 3,6};

    struct Node *head = NULL;

    head = linkList(a, 4);
    struct Node *newhead = head;
    while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
    reverseArrayLinkList(newhead);
    return 0;
}

void reverseArrayLinkList(struct Node *head)
{
    struct Node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}