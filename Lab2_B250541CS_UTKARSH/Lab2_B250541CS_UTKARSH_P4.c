#include<stdio.h>
int count(char A[][20],char s[],int n)
{
  int count =0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;;j++)
    {
      if(s[j]!=A[i][j])
       break;
      if(s[j]=='\0')
      {
        count++;
        break;
      }
    }
  }
  return count;
}
int main()
{
  int n;
  char s[20];
  printf("Enter the number of names\n");
  scanf("%d",&n);
  char A[n][20];
  printf("Enter the names\n");
  for(int i=0;i<n;i++)
    scanf("%s",&A[i]);
  printf("Enter the name\n");
  scanf("%s",s);
  printf("%d\n",count(A,s,n));
  return 0;
}
