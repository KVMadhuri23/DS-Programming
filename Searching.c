#include<stdio.h>
int main()
{
    int a[50],n,i,pos,c;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");	
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to search:");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        if(a[i]==pos)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        {
            printf("%d is found at the position %d",pos,i+1);
        }
    else
        {
            printf("element not found");
        }
    return 0;
}


