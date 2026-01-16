#include<stdio.h>
#include<string.h>
int main()
{
int n;
char target[20];
printf("Enter the no. of students\n");
scanf("%d",&n);
struct students
{
  char name[20];
  int marks;
};
struct students kid[n];
printf("Enter name and marks of students\n");
for(int i=0;i<n;i++)
  scanf("%s %d",kid[i].name,&kid[i].marks);
printf("Enter the name of student\n");
scanf("%s",target);
for(int i=0;i<n;i++)
{
  if(strcmp(kid[i].name,target)==0)
    {
      printf("Marks=%d\n",kid[i].marks);
      return 0;
    }
}
printf("No student with this name\n");

return 0;
}

