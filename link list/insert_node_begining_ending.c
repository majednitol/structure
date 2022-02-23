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

void addNodeBegining(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    struct Node *newhead = temp;
    print(newhead);
}

void addNodeEndding(struct Node *head, int data)
{
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    current->next = temp;
    print(head);
}
void insertNodeMiddle(struct Node *head, int position, int value)
{
    struct Node *temp = head;
    int count= 0;
    while (temp!= NULL)
    {
        count++;
        if (count == position)
        {
            struct Node *newNode= (struct Node *)malloc(sizeof(struct Node));
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
    int a[6] = {1, 2, 3, 4, 5, 6};
    struct Node *head;
    head = linkList(a, 6);
    print(head);
    addNodeBegining(head, 20);
    addNodeEndding(head, 40);
    insertNodeMiddle(head, 3, 80);
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