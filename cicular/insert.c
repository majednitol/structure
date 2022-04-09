#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// creating head that means 1st node,
struct node *addtoempty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
}

struct node *addNodeBegining(struct node *tail, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = tail->next;
    tail->next = new;
    return tail;
}

struct node *addNodeAtEnd(struct node *tail, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;

    new->next = tail->next;
    tail->next = new;
    tail = tail->next;
    return tail;
}

struct node *addPos(struct node *tail, int data, int pos)
{
    struct node *p = tail;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    while (pos > 1)
    {
        p = p->next;
        pos--;
    }
    new->next = p->next;
    p->next = new;
    if (p == tail)
    {
        tail = tail->next;
    }

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

void countNode(struct node *tail)
{
    struct node *temp = tail->next;
    int count = 0;
    while (temp != tail)
    {
        count++;
        temp = temp->next;
    }
    count++;
    printf("there are %d nodes in the list\n", count);
}

int searchElement(struct node *tail, int element)
{
    struct node *temp = tail->next;
    int index = 0;
    if (tail == NULL)
    {
        return -2;
    }

    while (temp != tail)
    {
        if (temp->data == element)

            return index;

        temp = temp->next;
        index++;
    }
    return -1;
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
    tail = addtoempty(45);

    tail = addNodeBegining(tail, 34);
    tail = addNodeBegining(tail, 384);
    tail = addNodeAtEnd(tail, 340);
    tail = addNodeAtEnd(tail, 348);
    tail = addPos(tail, 38, 6);
    // tail = createlist(tail);

    print(tail);
    countNode(tail);
    int index = searchElement(tail, 34);
    printf("node  found in list: %d\n", index);
}
