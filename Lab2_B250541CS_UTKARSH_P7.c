#include<stdio.h>
int count=0;
int BinarySearch(int A[],int k,int low,int high)
{
 int mid;
    if(high<low)
      return -1;
    mid=low+(high-low)/2;
    count++;
    if(A[mid]==k)
      return mid;
    count++;
    if(A[mid]>k)
    return BinarySearch(A,k,low,mid-1);
    else
     return BinarySearch(A,k,mid+1,high);
  
  
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
  printf("%d\n",BinarySearch(A,k,0,n-1));
  for(int i=0;i<n;i++)
  {
    count=0;
    int pos=BinarySearch(A,A[i],0,n-1);
    printf("position of A%d=%d and no. of comparisons=%d\n",A[i],pos,count);
  }
    printf("Enter k to get its position and no. of comparisons done\n");
    scanf("%d",&k);
    count=0;
    int pos=BinarySearch(A,k,0,n-1);
    printf("position of A%d=%d and no. of comparisons=%d\n",k,pos,count);
  return 0;
}
