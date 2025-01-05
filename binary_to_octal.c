// Write a Program for Binary to Octal Conversion. 
#include<stdio.h>

int main()
{
    int binary,ans=0,power=1;
    printf("Enter number between 0-1:");
    scanf("%d",&binary);
    
while(binary>0)
{
int lastDigit=binary%10;
ans+=lastDigit*power;
power*=2;
binary/=10;
}
// Converting decimal to octal

int octal=0;
power=1;
while(ans>0)
{
int lastDigit=ans%8;
octal+=lastDigit*power;
power*=10;
ans/=8;
}
printf("the octal number is:%d",octal);

     return 0;
}
     