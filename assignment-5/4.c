#include<stdio.h>
#include<stdlib.h>

void insert(int value);
void display_List();
void delete(int pos);

struct node
{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;

void delete(int pos)
{
    struct node *temp = head;
    int i;
    if(pos==1)
    {
        printf("\nElement deleted is : %d\n",temp->data);
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    else
    {
        for(i=0; i<pos-2; i++)
        {
            temp=temp->next;
        }

        struct node *del =temp->next;
        temp->next=temp->next->next;
        printf("\nElement deleted is : %d\n",del->data);
        del->next=NULL;
        free(del);
    }
    printf("\nUpdated Linked List is : \n");
    display_List();
    return ;
}



void insert(int value)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
    return ;
}

void display_List()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            printf(" %d->NULL",temp->data);
        }
        else
        {
            printf(" %d->",temp->data);
        }
        temp=temp->next;
    }
    printf("\n");
    return ;
}

int main()
{
    int n;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    printf("\nCreated Linked List\n");
    display_List();
    scanf("%d",&n);
    printf("\nLinked List after deletion at position %d:",n);
    delete(n);

    return 0;
}