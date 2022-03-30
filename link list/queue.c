#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5
int ourQueue[CAPACITY];
int font = 0, rear = -1, totalItem = 0;
bool isFull()
{
    if (totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if (totalItem == 0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
    if (isFull())
    {
        printf("sorry the queue is full\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    ourQueue[rear] = item;
    totalItem++;
}

int dequeue()
{
    if (isEmpty())
    {
        printf("sorry the queue is empty\n");
        return -1;
    }
    int frontItem = ourQueue[font];
    ourQueue[font] = -1;
    font = (font + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}
void print()
{
    int i;
    printf("queue : ");
    for (i = 0; i < CAPACITY; i++)
    {
        printf("%d ", ourQueue[i]);
    }
}
int main()
{
    enqueue(250);
    enqueue(20);
    enqueue(206);
    enqueue(209);
    enqueue(209);
    enqueue(2098);
    print();
    print();
    return 0;
}
