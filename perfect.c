#include <stdio.h>
void main()
{

int n,sum=0;
printf("Enter a no. :");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
if(n%i==0)
{sum=sum + i;}

}
if(n==sum)
{printf("It is a perfect no.  ");}

else{
printf("It is not a perfect no. ");}
}
