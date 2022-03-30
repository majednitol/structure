
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *head);
void midpositionDelete(struct Node *head);
void deleteByData(struct Node *head, int data);
struct Node *deleteByPostition(struct Node *head, int position);
struct Node *delete1stNode(struct Node *head);

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
    // deleteByData(head, 24);
    // midpositionDelete(head);
    // delete1stNode(head);
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
void deleteByData(struct Node *head, int data)
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


struct Node *delete1stNode(struct Node *head)
{
    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    

    while (temp->next == head)
    {
        
        
        
     temp->next = temp->next->next;
        
    }
    print(dummyhead->next);
}
// deletting data by position
struct Node *deleteByPostition(struct Node *head, int position)
{
    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    int count = 1;

    while (temp->next != NULL)
    {
       
        if ((position-1)== count)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
         count++;
    }
    print(dummyhead->next);
}
// for mid position 
// 
void midpositionDelete(struct Node *head)
{
    struct Node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    int position = (count % 2 == 0) ? (count / 2) : ((count + 1) / 2);

    // deleteByPostition(head, position);
}
