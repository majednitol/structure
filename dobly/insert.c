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

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    head = temp;
    return head;
}

struct node *addAtBeginning(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

struct node *addAtEnd(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *tp;

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
        tp->next = temp;
        temp->prev = tp;
        return head;
    }
}
struct node *addAfterPos(struct node *head, int data, int pos)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    struct node *newp = NULL;

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
        temp2 = temp->next;
        temp->next = newp;
        temp2->prev = newp;
        newp->next = temp2;
        newp->prev = temp;
    }

    return head;
}
int main()
{
    struct node *head = NULL, *ptr;
    head = addToEmptyNode(head, 30);
    // head = addAtBeginning(head, 98);
    // head = addAtEnd(head, 980);
    head = addAfterPos(head, 45, 2);
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ->", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}