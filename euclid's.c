#include<stdio.h>
int GCD(int a, int b)
{
if(a==b)
return(a);
if(a%b==0)
return(b);
if(b%a==0)
return(a);
if(a>b)
return(GCD(a%b,b));
else
return(GCD(b%a,a));
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("GCD is:%d",GCD(a,b));
return 0;
}
