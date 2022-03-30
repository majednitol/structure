#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *head);
struct Node *arrayList(int a[], int size)
{

    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = head;

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
// struct Node *deleteByData(struct Node *head, int data)
// {
//     struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
//     dummyhead->next = head;
//     struct Node *temp = dummyhead;
//     while (temp->next != NULL)
//     {
//             if (temp->next->data == data)
//         {
//             temp->next = temp->next->next;
//         }
//         else
//         {
//             temp = temp->next;
//         }
//     }
//     print(dummyhead->next);
// }


int main()
{
    int a[] = {0, 1, 2, 5, 8};
    struct Node *head;
    head = arrayList(a, 5);
    deleteByData(head, 5);

    print(head);
}

void print(struct Node *head){
     struct Node *current = head;
    do
    {
        printf("%d ->", current->data);
        current = current->next;

    } while (current != head);

    printf("NULL\n");
}