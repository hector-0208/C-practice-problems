/* Define a structure to store details of students' attendance in a class:
a) Roll Number (integer).
b) Name (string).
c) Attendance Percentage (float).
d) Input the details (Roll Number, Name, and Attendance Percentage) of n students (limit n to 10 at runtime).
e) Display the attendance percentages of all students in a tabular format.
f) Count and display the number of students with attendance above 75%.
g) Find and display the details of the student(s) with the highest and lowest attendance percentages.*/
#include <stdio.h>

struct students {
    int roll;
    char name[50];
    float attendance;
};

int main()
{
    int n = 2, above75 = 0;
    struct students student[n];
    float highestAttendance = 0, lowestAttendance = 100;
    printf("Enter the details of the students:\n");
    for (int  i = 0; i < n; i++)
    {
        printf("\nFor student %d\n", i + 1);
        printf("Roll Number: ");
        scanf(" %d", &student[i].roll);
        printf("Name: ");
        scanf(" %s", student[i].name);
        printf("Attendance percentage: ");
        scanf(" %f", &student[i].attendance);

        if (student[i].attendance > highestAttendance)
        {
            highestAttendance = student[i].attendance;
        }
        if (student[i].attendance < lowestAttendance)
        {
            lowestAttendance = student[i].attendance;
        }
        if (student[i].attendance > 75)
        {
            above75++;
        }
    }
    printf("\nStudent Details:\n");
    printf("%-20s %-20s %-15s\n", "Roll Number", "Name", "Attendance");
    for (int i = 0; i < n; i++)
    {
        printf("%-20d %-20s %-15.2f", student[i].roll, student[i].name, student[i].attendance);
        printf("\n");
    }
    printf("\nNumber of students with more than 75 percent attendance: %d\n", above75);
    printf("\nThe students with the highest attendance are:\n");
    printf("%-20s %-20s %-15s\n", "Roll Number", "Name", "Attendance");
    for (int i = 0; i < n; i++)
    {
        if (student[i].attendance == highestAttendance)
        {
            printf("%-20d %-20s %-15.2f", student[i].roll, student[i].name, student[i].attendance);
            printf("\n");
        }
    }
    printf("\nThe students with the lowest attendance are:\n");
    printf("%-20s %-20s %-15s\n", "Roll Number", "Name", "Attendance");
    for (int i = 0; i < n; i++)
    {
        if (student[i].attendance == lowestAttendance)
        {
            printf("%-20d %-20s %-15.2f", student[i].roll, student[i].name, student[i].attendance);
            printf("\n");
        }
    }
    return 0;
}