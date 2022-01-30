#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *head);
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
void insertNodeMiddle(struct Node *head, int position, int value)
{
    struct Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == position)
        {
            struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    print(head);
}

int main()
{
    int a[] = {1, 2, 3};

    struct Node *head;
    head = linkList(a, 3);
    print(head);
    insertNodeMiddle(head, 2, 555);
}

void print(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
