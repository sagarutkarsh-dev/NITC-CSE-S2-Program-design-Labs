#include<stdio.h>
int LinearSearch(int A[],int k,int n)
{
    for(int i=0;i<n;i++)
   {
      if(A[i]==k)
      {
          return i;
      }
   }
   return -1;
}
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
   int pos = LinearSearch(A,k,n);
   printf("%d\n",pos);
   return 0;
   
}

