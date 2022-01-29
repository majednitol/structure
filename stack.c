// #include <stdio.h>
// #define MAX 3
// int stack[MAX];
// int top = -1;
// void push(int x)
// {
//     if (top < MAX - 1)
//     {
//         top = top + 1;
//         stack[top] = x;
//         printf("sccessfully add %d\n", x);
//     }
//     else
//     {
//         printf("Exception no space\n");
//     }
// }

// int pop()
// {
//     if (top >= 0)
//     {
//         int val = stack[top];
//         top = top - 1;
//         return val;
//     }
//     printf("exception from pop empty\n");
//     return -1;
// }

// int peek()
// {
//     if (top >= 0)
//     {
//         return stack[top];
//     }
//     printf("empty stack\n");
//     return -1;
// }

// int main()
// {
//     peek();
//     push(20);
//     push(30);
//     push(40);
//     printf("pop %d\n", pop());

//     push(50);
//     printf("peek %d\n", peek());
//     return 0;
// }


