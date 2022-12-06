/**
 * Use a data structure to hold student names and
 * GPAs. Print out the information.
*/

#include <cs50.h>
#include <stdio.h>


typedef struct
{
    string name;
    float gpa;
}
student;

int main(void)
{
    // Get the number of students from the user
    int enrollment = get_int("Enrollment: ");

    // Allocate space for the students
    student school[enrollment];

    // Prompt for students' name and gpa
    for (int i = 0; i < enrollment; i++)
    {

    }
}