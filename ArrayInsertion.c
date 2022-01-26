#include<stdio.h>
int main()
{
int a[10],i,n,pos,num;
printf("Enter the no.of elements");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position:");
scanf("%d",&pos);
printf("enter the number to be inserted:");
scanf("%d",&num);
n=n+1;
for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;
printf("The final array is");
for(i=0;i<n;i++)
{
printf(" %d ",a[i]);
}
return 0;
}

