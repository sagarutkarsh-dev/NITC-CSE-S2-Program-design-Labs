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
    struct fisher
    {
        int id;
        char name[20];
        float total_catch;

    };
     struct fisher table[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&table[i].id,table[i].name,&table[i].total_catch);
        while(table[i].total_catch<0)
            {
                printf("Please enter valid total_catch\n");
                scanf("%f",&table[i].total_catch);
            }
    }
    
    for(int i=0;i<n-1;i++)
    {
        int max=i;
        struct fisher temp;
        for(int j=i+1;j<n;j++)
            if(table[j].total_catch>table[max].total_catch)
                {
                   max=j;
                }
        if(max != i)
         { 
            temp = table[i];
            table[i] = table[max];
            table[max] = temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d %s %f\n",table[i].id,table[i].name,table[i].total_catch);
}
