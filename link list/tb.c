

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;



void createList(int n);
void displayListFromFirst();
void displayListFromEnd();


int main()
{
    int n, choice;

    head = NULL;
    last = NULL;
    
    



    return 0;
}


void createList(int a[],int size)
{
    

    
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
           

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;

            for(i=2; i<=size; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; // Link new node with the previous node
                    newNode->next = NULL;

                    last->next = newNode; 
                    last = newNode;          
                }
               
            }

            
        }
        
    }



/**
 * Displays the content of the list from beginning to end
 */
void displayListFromFirst()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;
            
            /* Move the current pointer to next node */
            temp = temp->next;
        }
    }
}


/**
 * Display the content of the list from last to first
 */
void displayListFromEnd()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = last;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of last-%d node = %d\n", n, temp->data);

            n++;
            
            /* Move the current pointer to previous node */
            temp = temp->prev; 
        }
    }
}