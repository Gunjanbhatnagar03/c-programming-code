#include <stdio.h>

struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};
int main()
{
     
    
	 struct StudentData student;

    
     
     
     student.stu_name = "Gunjan";
     student.stu_id = 202106014;
     student.stu_age = 18;

     /* Displaying the values of struct members */
     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     return 0;
}

