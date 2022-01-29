
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node* head);
struct Node *delete(struct Node *head,int data);

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
    int a[] = {1, 2, 3};
    
    struct Node *head;
    head = linkList(a, 3);
    print(head);
    struct Node *newHead= delete(head,3);
    print(newHead);
}


void print(struct Node* head){
while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
    
}

struct Node *delete(struct Node *head,int data){
    struct Node *dummyHead =(struct Node *) malloc(sizeof(struct Node));
    dummyHead->next = head;
    struct Node *temp= dummyHead;
    while(temp->next!=NULL){
      if(temp->next->data==data){
          temp->next = temp->next->next;
          break;
      }
      else{
           temp= temp->next;
      }
      
    }
return dummyHead->next;
}