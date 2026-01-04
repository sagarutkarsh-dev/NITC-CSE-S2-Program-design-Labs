#include<stdio.h>
int search(char s[],char c)
{
    for(int i=0;s[i]!='\0';i++)
   {
      if(s[i]==c)
      {
          return 0;
      }
   }
   return 1;
}
int main()
{
   char c;
   char s[50];
   printf("Enter the characters\n");
    scanf(" %s",&s);
   printf("Enter c\n");
   scanf(" %c",&c);
   search(s,c)==0?printf("Yes"):printf("No");
   printf("\n");
   return 0;
   
}

