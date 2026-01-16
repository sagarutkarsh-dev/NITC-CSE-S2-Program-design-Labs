#include<stdio.h>
#include<string.h>
 struct  details
    {
        int roll;
        char name[20];
        float cgpa;
    };



void insSorta(struct details student[],int n)
{
    for(int i=1;i<n;i++)
    {
        struct details key=student[i];
        int j=i-1;
        for(;j>=0 && student[j].roll>key.roll  ;j--)
        {
            student[j+1]=student[j];
        }
        student[j+1]=key;

    }
    return;
}

void insSortb(struct details student[], int n)
{
    for(int i=1;i<n;i++)
    {

        struct details key=student[i];
        int j=i-1;
        for(;j>=0 && strcmp(student[j].name,key.name)>0  ;j--)
        {
            student[j+1]=student[j];
        }
        student[j+1]=key;
       
    }
}

void insSortc(struct details student[],int n)
{
    for(int i=1;i<n;i++)
    {
        struct details key=student[i];
        int j=i-1;
        for(;j>=0 && student[j].cgpa>key.cgpa  ;j--)
        {
            student[j+1]=student[j];
        }
        student[j+1]=key;

    }
    return;
}

void selSorta(struct details student[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        int min=i;
        struct details temp;
        for(int j=i+1;j<n;j++)
            if(student[j].roll<student[min].roll)
                {
                   min=j;
                }
        if (min != i) 
        {
        temp = student[min];
        student[min] = student[i];
        student[i] = temp;
        }    
       
    }
}

void selSortb(struct details student[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        int min=i;
        struct details temp;
        for(int j=i+1;j<n;j++)
            if(strcmp(student[j].name,student[min].name)<0)
                {
                   min=j;
                }
       if (min != i) 
        {
        temp = student[min];
        student[min] = student[i];
        student[i] = temp;
        }    
    }
}

void selSortc(struct details student[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        int min=i;
        struct details temp;
        for(int j=i+1;j<n;j++)
            if(student[j].cgpa<student[min].cgpa)
                {
                   min=j;
                }
        
        if (min != i) 
        {
        temp = student[min];
        student[min] = student[i];
        student[i] = temp;
        }       
    }
}

int main()
{
    int n;
    char sortType,sortField;

     do
    {
        printf("Enter n, 0<n<101\n");
        scanf(" %d",&n);
    }
    while(n>100 || n<=0);
   
    struct details student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&student[i].roll,student[i].name,&student[i].cgpa);
        if(student[i].roll>250 || student[i].roll<100 || student[i].cgpa>10.00 || student[i].cgpa<0.00)
            {
                printf("Invalid input\nPlease re-enter valid details\n");
                i--;
            }
    }
    while(1)
    {
    printf("Select your sorting algorithm  or 'e' to exit \n Enter\n   i for insertion sort\n   s for selection sort\n");
    scanf(" %c",&sortType);
    if(sortType=='e')
        return 0;
    printf("Choose the field for sorting\nEnter\n   a for roll no.\n   b for name\n   c for cgpa\n");
    scanf(" %c",&sortField);
    if(sortField=='e')
        return 0;
     if(sortType=='i')
     {
        if(sortField=='a')
            insSorta(student,n);
        else if(sortField=='b')
            insSortb(student,n);
        else if(sortField=='c')
            insSortc(student,n);
     }
     else if(sortType=='s')
     {
        if(sortField=='a')
            selSorta(student,n);
        else if(sortField=='b')
            selSortb(student,n);
        else if(sortField=='c')
            selSortc(student,n);
     }
     else
        printf("Invalid input\n");
    for (int i=0;i<n;i++)
        printf("%d %s %.1f\n",student[i].roll,student[i].name,student[i].cgpa);
    }
}