#include <stdio.h>
#include <string.h>
struct student
{
    int id1;
    int id2;
    char a;
    char b;
    float percentage;
};
int main()
{
    int i;
    struct student record1 = {1, 2, 'A', 'B', 90.5};
    printf("size of structure in bytes : %d\n",
           sizeof(record1));
    printf("\nAddress of id1 = %u", &record1.id1);
    printf("\nAddress of id2 = %u", &record1.id2);
    printf("\nAddress of a = %u", &record1.a);
    printf("\nAddress of b = %u", &record1.b);
    printf("\nAddress of percentage  = %d", &record1.percentage);
    printf("\nAddress of percentage = %p", &record1.percentage);
    printf("\nAddress of percentage = %x", &record1.percentage);
    printf("\nAddress of percentage = %X", &record1.percentage);
    return 0;
}