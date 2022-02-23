#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int searchElement(struct Node *head, int element)
{
    int index = 1;
    while (head != NULL)
    {
        if (head->data == element)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

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
            current = current->next ;
        }
    }
    return head;
}

int main()
{
    int a[] = {1, 2, 30, 4, 5};
    struct Node *head;
    head = linkList(a, 5);
    printf("index %d", searchElement(head, 30));
}
