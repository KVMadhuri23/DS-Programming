#include<stdio.h>
int main()
    {
        int a[20],i,n,pos;
        printf("Enter the number of elemnts in array:");
        scanf("%d",&n);
        printf("Enter the elments");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\nEnter the location where you wish to delete the element:");
        scanf("%d",&pos);
        if(pos>=n-1)
        {
            printf("\nDeletion not possible");
        }
        else
        for(i=pos-1;i<=n-1;i++)
        {
        a[i]=a[i+1];
        }
        printf("\nArray after deletion");
        for(i=0;i<n-1;i++)
        {
            printf(" %d ",a[i]);
        }
        return 0;
    }

