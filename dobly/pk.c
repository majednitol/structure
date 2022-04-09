#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *addToEmptyNode(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    return head;
}

struct node *addAtBeginning(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    head = temp;
    return head;
}
struct node *addAtEnd(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    struct node *tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}
struct node *addAfterPos(struct node *head, int data, int pos)
{
    struct node *temp = head, *temp2 = NULL, *newp = NULL;
    newp = addToEmptyNode(newp, data);
    while (pos != 1)
    {
        temp = temp->next;
        pos--;
    }

    if (temp->next != NULL)
    {
        temp->next = newp;
        newp->prev = temp;
    }
    else
    {
        temp->next = newp;
        temp2->prev = newp;
        newp->next = temp2;
        newp->prev = newp;
    }
    return head;
}

struct node *createlist(struct node *head)
{
    int i, n, data;
    printf("total number of nodes of the list");
    scanf("%d", &n);
    if (n == 0)
    {
        return head;
    }
    printf("Enter the element number 1: ");
    scanf("%d", &data);
    head = addToEmptyNode(head, data);
    for (i = 1; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &data);
        head = addAtEnd(head, data);
    }
    return head;
}

void print(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main()
{
    struct node *head;
    // head = addToEmptyNode(head, 20);
    // head = addAtBeginning(head, 980);
    // head = addAtEnd(head, 50);
    // head = addAfterPos(head, 90, 2);

    head = createlist(head);
    print(head);
}