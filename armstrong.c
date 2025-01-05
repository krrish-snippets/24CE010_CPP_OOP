#include <stdio.h>
#include <math.h>
void main()
{
    int n,ld,p=0,s=0,a;
    float c;
    printf("Enter a number :");
    scanf("%d",&n);
    a = n;
    while(n!=0)
    {
      p++;
      n=n/10;
    }
    n = a;
    for(int i=0;i<p;i++)
    {
        ld=a%10;
        c=pow(ld,p);
        s=s+c;
        a=a/10;

    }
if(s == n){ 
        printf("\nIt is an armstrong no. ");
    }
    else{ 
        printf("\nIt is not an armstrong no. ");
    }
}



