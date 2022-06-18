#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    int PRN;
    float Marks;
};
int main()
{
    struct student var;  // structure variable
    struct student *ptr; // pointer to student structure

    ptr = &var; // assigning value of structure variable

    printf("Enter details of student : \n");
    printf("\nEnter Name of student : ");
    scanf("%s", ptr->name);
    printf("\nEnter Roll No of student : ");
    scanf("%d", &ptr->roll);
    printf("\nEnter PRN of student : ");
    scanf("%d", &ptr->PRN);
    printf("\nEnter Marks of student : ");
    scanf("%f", &ptr->Marks);

    printf("\nEntered details of student are : \n");
    printf("\nName : %s \n\nRollNo: %d \n\nPRN: %d \n\nMarks: %.02f\n\n", ptr->name, ptr->roll, ptr->PRN, ptr->Marks);

    return 0;
}