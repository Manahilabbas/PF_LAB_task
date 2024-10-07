/*Which loop system would be better for user input. Justify your answer by creating a program that
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.*/

/*do-while loop system is wouls be better for user input. because in such cases number of itration is unknown and do-while loop  first takes input from user then check the condition again. */
#include <stdio.h> 
int main()
{
    int num ,sum=0;
    do
   { printf("Enter number:\n");
    scanf("%d",&num);
    sum+=num;
    printf("your current sum is:%d \n",sum);}
    while(num!=0);


}