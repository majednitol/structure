#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void print(struct Node *head);
void countNode(struct Node *head);
struct Node *delete (struct Node *head, int position);

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
    int a[6] = {1, 2, 3, 4, 5, 6};
    struct Node *head;
    head = linkList(a, 6);
    

    

    countNode(head);
}

struct Node *delete (struct Node *head, int position)
{
    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    int count = 1;

    while (temp->next != NULL)
    {
        count++;
        if (position == count)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    print(dummyhead->next);
}


void print(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}