#include<stdio.h>
int main()
{
   int n,k;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   int A[n];
   printf("Enter the elements\n");
   for(int i=0;i<n;i++)
      scanf("%d",&A[i]);
   printf("Enter k\n");
   scanf("%d",&k);
   
   for(int i=0;i<n;i++)
   {
      if(A[i]==k)
      {
          printf("%d\n",i);
          return 0;
      }
   }
   printf("-1\n");
   return 0;
}

