#include<stdio.h>
int main()
{
     int n;
     do
    {
        printf("Enter n, 0<n<51\n");
        scanf("%d",&n);
    }
    while(n>50 || n<=0);
    struct details
    {
        char name[20];
        int  marks;

    };
     struct details student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",student[i].name,&student[i].marks);
        while(student[i].marks<0)
            {
                printf("Please enter valid marks\n");
                scanf("%d",&student[i].marks);
            }
    }
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        struct details temp;
        for(int j=i+1;j<n;j++)
            if(student[j].marks<student[min].marks)
                {
                   min=j;
                }
            struct details key = student[min];
            while(min > i)
        {
            student[min] = student[min - 1];
            min--;
        }
        student[i] = key;
        
    }
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%s %d\n",student[i].name,student[i].marks);
    return 0;
}
