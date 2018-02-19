#include<stdio.h>
int main()
{
int a[20],i,j,n,temp;
scanf("\n%d",&n);
for(i=0;i<=n;i++)
{
scanf("\n %d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[n]);
return 0;
}
