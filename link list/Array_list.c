
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *delete1stNode(struct Node *head);
// void print(struct Node *head);
// struct Node *linkList(int a[], int size)
// {
//     struct Node *head = NULL, *temp = NULL, *current = NULL;
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         temp = (struct Node *)malloc(sizeof(struct Node));
//         temp->data = a[i];
//         temp->next = head;
//         if (head == NULL)
//         {
//             head = temp;
//             current = temp;
//         }
//         else
//         {
//             current->next = temp;

//             current = current->next;
//         }
//     }
//     return head;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     struct Node *head;
//     head = linkList(a, 5);
    
//     print(head);
// }

// void print(struct Node *first)
// {
//     struct Node *temp = first;
//     if (first != NULL)
//     {
//         do
//         {
//             printf("%d-> ", temp->data);
//             temp = temp->next;
//         } while (temp != first);
//     }
// }




