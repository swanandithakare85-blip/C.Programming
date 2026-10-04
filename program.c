#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}
2)
#include <stdio.h>

int main() {
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}
3)
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
4)Program to Demonstrate Basic I/O Functions Using Different Data Types
  #include <stdio.h>
int main()
{
int age;
float height;
double salary;
char grade;
printf("Enter age: ");
scanf("%d", &age);
printf("Enter height: ");
scanf("%f", &height);
printf("Enter salary: ");
scanf("%lf", &salary);
printf("Enter grade: ");
scanf(" %c", &grade);
printf("\n--- Details ---\n");
printf("Age = %d\n", age);
printf("Height = %.2f\n", height);
printf("Salary = %.2lf\n", salary);
printf("Grade = %c\n", grade);
return 0;
}
5)
Program to Demonstrate Single-Line and Multi-Line Comments
#include <stdio.h>
int main()
{
// This is a single-line comment.
printf("Hello, World!\n");
/*
This is a multi-line comment.
It can contain multiple lines.
*/
printf("This program demonstrates comments in C.\n");
return 0;
}
