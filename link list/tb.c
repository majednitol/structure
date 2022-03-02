#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void print(struct Node *head);

struct Node *linkList(int a[], int size)
{
    int i;

    struct Node *head = NULL, *temp = NULL, *last = NULL, *current = NULL;

    for (i = 0; i < size; i++)
    {

        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->prev = NULL;
        temp->next = NULL;

        if (head == NULL)
        {

            head = temp;
            current = temp;
            last = temp;
        }
        else
        {
            current->next = temp;
           current= current->next;
            current->prev = last;
            last = temp;
        }
    }

    return head,last;
}

void addNodeEndding(struct Node *head, int data)
{
    struct Node *current = head;
    while (current->prev != NULL)
    {
        current = current->prev;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->prev = NULL;
    current->prev = temp;
    
}
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    struct Node *head;
    head = linkList(a, 6);
    addNodeEndding(head, 4000);
    print(head);
}
void print(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d-> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
}