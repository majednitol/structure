
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// int main()
// {

//     struct Node *a = NULL;
//     struct Node *b = NULL;
//     struct Node *c = NULL;
//     a = (struct Node *)malloc(sizeof(struct Node));
//     b = (struct Node *)malloc(sizeof(struct Node));
//     c = (struct Node *)malloc(sizeof(struct Node));
//     a->data = 23;
//     b->data = 23;
//     c->data = 23;

//     a->next = b;
//     b->next = c;
//     c->next = NULL;
//     while (a != NULL)
//     {
//         printf("%d-> ", a->data);
//         a = a->next;
//     }
// }




#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *arrayList(int a[], int size)
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
    int a[] = {0, 1, 2};
    struct Node *head;
  head= arrayList(a,3);
    while (head != NULL)
    {
        printf("%d ->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}