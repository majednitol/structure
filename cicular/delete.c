#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// creating head that means 1st node
struct node *addtoempty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
}

struct node *addNodeAtEnd(struct node *tail, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    new->next = tail->next;
    tail->next = new;
    tail = tail->next;
    return tail;
}

struct node *createlist(struct node *tail)
{
    int i, n, data;
    printf("Enter the number of nodes of the list: ");
    scanf("%d", &n);
    if (n == 0)
    {
        return tail;
    }
    printf("Enter the element 1: ");
    scanf("%d", &data);
    tail = addtoempty(data);
    for (i = 1; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &data);
        tail = addNodeAtEnd(tail, data);
    }
    return tail;
}

struct node *delFirst(struct node *tail)
{
    if (tail == NULL)

        return tail;
    if (tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
}

struct node *delLast(struct node *tail)
{
    if (tail == NULL)

        return tail;

    if (tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;
    return tail;
}

struct node *delInter(struct node *tail, int pos)
{
    if (tail == NULL)
        return tail;
    struct node *temp = tail->next;
    if (tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }

    while (pos > 2&&pos ==pos)
    {
        temp = temp->next;
        pos--;
    }

    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    if (temp2 == tail)
        tail = temp;
    free(temp2);
    temp2 = NULL;
    return tail;
}
void print(struct node *tail)
{
    struct node *p = tail->next;
    do
    {
        printf("%d->", p->data);
        p = p->next;
    } while (p != tail->next);
}

int main()
{
    struct node *tail;

    tail = createlist(tail);
    printf("\nList before deletion: ");
    print(tail);
    // tail = delFirst(tail);
    tail = delInter(tail, 3);
    printf("\nList after deletion: ");
    // tail = delLast(tail);
    print(tail);
}
