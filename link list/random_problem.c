#include <stdio.h>
void cTOF(int F)
{
    int C;
    C = 5 * (F - 32) / 9;
    printf("%d", C);
}
void fToC(int C)
{
    int F;
    F = (C * 9 / 5) + 32;
    printf("%d", F);
}
int main()
{
    int n, C, F;

    printf("convert temperature\n");
    printf("option 1: convert celcius to ferenheit \n");
    printf("option 2: convert ferenheit to celcius \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("plz input ferenheit temperature");
        scanf("%d", &F);
        cTOF(F);

        break;
    case 2:
        printf("plz input celcius temperature");
        scanf("%d", &C);
        fToC(C);
        break;

    default:
        printf("invalid option");
        break;
    }
}

#include <stdio.h>
void leapYear(int year){
if ((year % 400) == 0 && (year % 4) == 0 || (year % 100) != 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not leap year\n", year);
    }
}
int main()
{
    int year;
    scanf("%d", &year);
   leapYear(year);
    return 0;
}

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

 #include <stdio.h>
int factView(int n){
    int i,fact=1;
for ( i = 1; i <= n; i++)
    {
        fact*=i;
    }
return fact;
}
int main(){
    int i ,n,fact;
    scanf("%d",&n);
    fact = factView(n);
    printf("%d",fact);
    return 0;

}

#include <stdio.h>
void maxAndMin(int a[],int size){
    int i;
    int max = a[0], min = a[0];

    for (i = 0; i <size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("max= %d\n", max);
    printf("min= %d\n", min);

}
int main()
{

   int a[5], i,size;
   printf("enter array size\n");
   scanf("%d",&size);
    printf("enter array element\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

maxAndMin(a,5);
    return 0;
}

#include <stdio.h>
void numberWeatherCheck(int n1){
    (n1%2==0) ? printf("%d is even %d",n1) : printf("%d is odd %d",n1);
}
int main(){
    int n1;
    scanf("%d",&n1);
    numberWeatherCheck(n1);
    return 0;
}

#include <stdio.h>
void fibonacci(int n)
{
    int f = 0, s = 1;
    int t = f + s;
    int i;

    printf("%d, %d,", f, s);
    for (i = 0; i < n; i++)
    {
        t = f + s;
        printf("%d, ", t);
        f = s;
        s = t;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

#include <stdio.h>
int numberCheaker(int num){
    int  flag = 0;
   for(int i=2 ; i < num/2 ; i++) {
      if(num%i == 0) {
         printf("%d is not a prime number", num);
         flag = 1;
         break;
      }
   }
   if(flag == 0) {
      printf("%d is a prime number", num);
   }
}
int main() {
    int num ;
    printf("enter a number\n");
    scanf("%d", &num);
numberCheaker(num);
    return 0;

}

#include <stdio.h>
#include <math.h>
int area(int base, int height)
{
    int area = (base * height) / 2;
    return area;
}
int tArea(int a, int b, int c)
{
    int s = a + b + c;
    int area2 = sqrt((s - a) * (s - b) * (s - c));
    return area2;
}

int main()
{
    float base, height, area1, s, a, b, c, area2;

    printf("enter value for base and height\n");

    scanf("%f%f", &base, &height);

    area1 = area(base, height);

    printf("Area of the triangle = %.2f sq. units\n", area1);
    printf("enter value of a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    s = a + b + c;
    area2 = tArea(a, b, c);
    printf("Area of the triangle using three sides = %.2f sq. units", area2);

    return 0;
}

#include <stdio.h>
int area(int l, int w)
{
    int area;
    area = l * w;
    return area;
}
int perimeter(int l, int w)
{
    int p;
    p = 2 * (l + w);
    return p;
}
int main()
{
    int a, b, x, y;

    scanf("%d%d", &a, &b);

    x = area(a, b);
    y = perimeter(a, b);
    printf("\nArea of Rectangle = %d\n\nPerimeter of Rectangle = %d", x, y);
    return 0;
}