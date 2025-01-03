#include <stdio.h>
void main()
{
char str[50];
int length=0,i=0;
printf("\nEnter the string :");
gets(str);
while(str[i]!='\0'){
i++;
length++;
}
printf("\nThe length of the string is %d:",length);
}
