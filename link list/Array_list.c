
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *linkList(int a[], int size){
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for ( i = 0; i < size; i++)
    {
        temp =(struct Node *) malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = NULL;
        if (head== NULL)
        {
            head = temp;
            current = temp;
        }
        else{
            current->next= temp;
            current= current->next;
        }
        
    }
    return head;
    
}


int main()
{
    int a[] = {1, 2,3};
    struct Node *head;
    head = linkList(a, 3);
    while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    
}