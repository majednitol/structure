#include <stdio.h>

int liner_search(int A[5], int x)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int A[5], i, x, s;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x);

    s = liner_search(A, x);
    printf("%d\n", s);

    return 0;
}
