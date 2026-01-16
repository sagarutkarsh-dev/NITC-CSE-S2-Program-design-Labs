#include<stdio.h>
#include<string.h>
void cpy(char a[],char b[])
{
    int i=0;
    for(;b[i]!='\0';i++)
        a[i]=b[i];
    a[i]='\0';
}
int main()
{
    int n,t=0;
    char s='y';
     do
    {
        printf("Enter n, 0<n<51\n");
        scanf("%d",&n);
    }
    while(n>50 || n<=0);
    char name[100][20];
    for(int i=0;i<n;i++)
        scanf("%s",name[i]);
    for(int i=1;i<n;i++)
    {

        char key[20];
        cpy(key,name[i]);
        int j=i-1;
        for(;j>=0 &&strcmp(name[j],key)>0 ;j--)
        {
            cpy(name[j+1],name[j]);
            
        }
        cpy(name[j+1],key);

    }
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%s\n",name[i]);
    printf("\n");
    
    while(s!='n')
        {
             if(n==100)
                    break;
            scanf(" %c",&s);
           
            if(s=='y')
            {
                scanf("%s",name[n]);
                printf("\n");
                char key[20];
                cpy(key,name[n]);
                int j=n-1;
                for(;j>=0 && strcmp(name[j],key)>0  ;j--)
                {
                     cpy(name[j+1],name[j]);
            
                }
                 cpy(name[j+1],key);
                 n++;
                 for(int i=0;i<n;i++)
                    printf("%s\n",name[i]);
                 printf("\n");
            }
        }

        return 0;

}