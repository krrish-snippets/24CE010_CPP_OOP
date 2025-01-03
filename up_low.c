#include <stdio.h>
void main()
{
char str1[50],str2[50];
printf("\nEnter the string 1  :");
gets(str1);
int i;
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]>=65 && str1[i]<=90)
{str2[i]=str1[i]+32;}

else if(str1[i]>=97 && str1[i]<=122)
{str2[i]=str1[i]-32;}

else if(str1[i]==" ")
{str2[i]=" ";}

}
printf("\nThe previous string is :");
puts(str1);
printf("\nThe updated string is :");
puts(str2);
}
