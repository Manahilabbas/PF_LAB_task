/*Create a program that defines a structure Student with fields roll_no, name, and another nested structure Marks 
(fields: maths, science, and english).
 Use an array of Student to store data for 5 students and calculate the average marks for each student.*/
 #include<stdio.h> 
  struct marks{
    int english;
    int maths;
    int science;
 };
 struct student {
    int roll_no;
    char name[20];
    struct marks subject;
 };

int main()
{
    struct student students[5];
    int avg[5];
      for (int i = 0; i < 5; i++) {
        printf("\nEnter the following details for student %d:\n", i + 1);

        printf("Enter the roll number:\n ");
        scanf("%d", &students[i].roll_no);

        printf("Enter the name:\n ");
        scanf(" %s", students[i].name);

        printf("Enter the marks of Maths:\n ");
        scanf("%d", &students[i].subject.maths);

        printf("Enter the marks of English: \n");
        scanf("%d", &students[i].subject.english);

        printf("Enter the marks of Science:\n ");
        scanf("%d", &students[i].subject.science);
    }
    for(int i=0;i<5;i++)
    printf("average marks of student %d is %d",i+1,avg[i]);
    return 0;
}