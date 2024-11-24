/*Define a structure Company with fields name, year_established, and an array departments containing the
names of up to 5 departments. Write a program to display company details including all departments.*/
#include<stdio.h> 
struct companies{
    char name[20];
int year_stablished;
char * department[5];
};
int main()
{
    struct companies company={"tech",2004,{"engineering","marketing","finance","IT","Sales"}};
    printf("name of company: %s \n",company.name);
    printf("year of stablish: %d \n",company.year_stablished);
    for(int i=0;i<5;i++){
        printf("department %d: %s\n",i+1,company.department[i]);
    }

    return 0;
}