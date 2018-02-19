#include<stdio.h>
#include<string.h>
int main()
{
char str [9]="kani*^";
int count=0,i,n;
  n=strlen(str);     
for(i=0;i<=n;++i)
{
if(str[i]=='!'||str[i]=='*'||str[i]=='^')
count=count+1;
}
printf("%d",count);
return 0;
}
