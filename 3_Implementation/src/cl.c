#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void addition()
{
int a,b,c;
printf("performing addition operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("addition = %d\n",c);
}
void subtraction()
{
int a,b,c;
printf("performing subtraction operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("subtraction = %d\n",c);
}
void multiplication()
{
int a,b,c;
printf("performing multiplication operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a*b;
printf("multiplication = %d\n",c);
}
void division()
{
int a,b,c;
printf("performing division operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a/b;
printf("division %d\n",c);
}
void modulus()
{
int a,b,c;
printf("performing modulus operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a%b;
printf("modulus %d\n",c);
}
void factorial()
{
int n,fact=1,i;
printf("performing factorial operation\n");
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial %d\n",fact);
}
int power()
{
int base,exponential,result;
printf("performing power operation\n");
printf("enter base and exponential values\n");
scanf("%d%d",&base,&exponential);
result=power(base,exponential);
printf("result = %d\n",result);
}
void square()
{
int a,result;
printf("perform square operation\n");
printf("enter a\n");
scanf("%d",&a);
result=a*a;
printf("result = %d\n",result);
}
int squareroot()
{
int a,result;
printf("performing squareroot operation\n");
printf("enter a\n");
scanf("%d",&a);
result=squareroot(a);
printf("result = %d\n",result);
}
int absolute()
{
int a,result;
printf("perform absolute operation\n");
printf("enter a\n");
scanf("%d",&a);
result=absolute(a);
printf("result %d\n",result);
}
int naturallogarithm()
{
double a,result;
printf("performing natural logarithm operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=naturallogarithm(a);
printf("result = %lf",result);
}
int exponentiallogarithm()
{
double a,result;
printf("performing exponential logarithm operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=exponentiallogarithm(a);
printf("result = %lf",result);
}
int sine()
{
float x,result;
printf("perform sine operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=sine(x*3.14/180);
printf("%.2f",result);
}
int cosine()
{
float x,result;
printf("perform cosine operation\n");
printf("enter x\n");
scanf("%f",&x);
result=cosine(x*3.14/180);
printf("%.2f",result);
}
int tann()
{
float x,result;
printf("perform tann operation\n");
printf("enter x\n");
scanf("%f",&x);
result=tann(x*3.14/180);
printf("%.2f",result);
}
int cosec()
{
float x,result;
printf("perform cosec operation\n");
printf("enter x\n");
scanf("%f",&x);
result=(1/sine(x*3.14/180));
printf("%.2f",result);
}
int sec()
{
float x,result;
printf("perform sec operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=(1/cosine(x*3.14/180));
printf("%.2f",result);
}
int cot()
{
float x,result;
printf("perform cot operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=(1/tann(x*3.14/180));
printf("%.2f",result);
}
void decimaltobinary()
{
int b[100],n,i=0,j;
printf("performing decimal to binary operation\n");
printf("enter n\n");
scanf("%d",&n);
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%d",b[j]);
}
}
int binarytodecimal()
{
int n,i,r,sum=0;
printf("performing binary to decimal operation\n");
printf("enter n\n");
scanf("%d",&n);
i=0;
while(n>0)
{
r=n%10;
sum=sum+r*power(2,i);
n=n/10;
i++;
}
printf("%d",sum);
}