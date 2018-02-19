#include<stdio.h>
#include<string.h>
int main()
{
char str [30]="hello.123";
int count=0,i,n;
  n=strlen(str);     
for(i=0;i<=n;++i)
{
if(str[i]>='0' && str[i]<='9')
count=count+1;
}
printf("%d",count);
return 0;
}
