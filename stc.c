#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float cgpa;
} s1;

int main()
{
    scanf("%d%s%f", &s1.id, s1.name, &s1.cgpa);

    printf("id : %d\n name : %s\n cgpa : %.2f", s1.id, s1.name, s1.cgpa);
    return 0;
}
