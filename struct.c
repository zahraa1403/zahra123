#include<stdio.h>
struct students
{
char name[20];
int age;
int rollno;
float mark;
};
int main()
{
struct students s[10];
int i,n;
printf("Enter no of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name");
scanf("%s",s[i].name);
printf("Enter the age");
scanf("%d",&s[i].age);
printf("Enter the Roll number");
scanf("%d",&s[i].rollno);
printf("Enter the mark");
scanf("%f",&s[i].mark);
}
for(i=0;i<n;i++)
{
printf("\n NAME: %s\n",s[i].name);
printf("AGE: %d \n",s[i].age);
printf("Roll no: %d \n",s[i].rollno);
printf("mark: %f\n",s[i].mark);
}
}
