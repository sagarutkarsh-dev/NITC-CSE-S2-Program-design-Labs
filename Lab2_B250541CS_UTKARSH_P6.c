#include<stdio.h>
int BinarySearch(int A[],int k,int n)
{
 int start=0,end=n-1,mid;
  while(end>=start)
  {
    mid=start+(end-start)/2;
    if(A[mid]==k)
      return mid;
  
    if(A[mid]>k)
      end=mid-1;
    else
      start=mid+1;
  }
  return -1; 
}
int main()
{
  int n,k;
  printf("Enter the no. of elements\n");
  scanf("%d",&n);
  int A[n];
  for(int i=0;i<n;i++)
    scanf("%d",&A[i]);
  printf("Enter k\n");
  scanf("%d",&k);
  printf("%d\n",BinarySearch(A,k,n));
  return 0;
}
