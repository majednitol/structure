
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *head);
struct Node *deleteByData (struct Node *head, int data);
struct Node *deleteByPostition (struct Node *head, int position);

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
    int a[] = {14, 24, 38, 40, 52};

    struct Node *head;
    head = linkList(a, 5);
    print(head);
    deleteByData (head, 24);
    deleteByPostition(head,5);
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

// deletting data by data
struct Node *deleteByData (struct Node *head, int data)
{
    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    while (temp->next != NULL)
    {
        if (temp->next->data == data)
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
// deletting data by position
struct Node *deleteByPostition (struct Node *head, int position)
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