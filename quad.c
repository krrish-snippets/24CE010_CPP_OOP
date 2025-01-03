#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,dis,root,r1,r2;
printf("\nEnter the coefficient of x2  a:");
scanf("%f",&a);
printf("\nEnter the coefficient of x b :");
scanf("%f",&b);
printf("\nEnter the constant term c :");
scanf("%f",&c);
d=b*b-4*a*c;
dis=sqrt(d);
if(dis==0)
{
    printf("\nRoots are equal");
root=(-b/(2*a));
printf("\nroot is : %.1f",root);
}
if(dis>0)
{
    r1=(-b+dis)/(2*a);
    r2=(-b-dis)/(2*a);
    printf("Roots are real.");
    printf("\n  root is %.1f",r1);
    printf("\n  root is %.1f",r2);
}
if(dis<0)
{
printf("Roots are imaginary .");
}
}
