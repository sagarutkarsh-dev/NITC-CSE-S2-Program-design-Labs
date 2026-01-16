#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter n, 0<n<301\n");
        scanf("%d",&n);
    }
    while(n>300|| n<=0);
    int temp[n];

    for(int i=0;i<n;i++)
        scanf("%d",&temp[i]);
    for(int i=1;i<n;i++)
    {
        int key=temp[i];
        int j=i-1;
        for(;j>=0 && temp[j]>key  ;j--)
        {
            temp[j+1]=temp[j];
        }
        temp[j+1]=key;

    }
    for(int i=0;i<n;i++)
        printf("%d ",temp[i]);
    printf("\n");
    return 0;
}