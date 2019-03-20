#include<stdio.h>
#include<conio.h>
float minicalc(int,int,char);
void main()
{
    int a,b;
    char c;
    printf("\nEnter first operand");
    scanf("%d",&a);
    printf("\nEnter the second operand");
    scanf("%d",&b);
    printf("\nEnter +:addition,-:subraction,*:multiplication,/:division");
    fflush(stdin);
    scanf (" %c",&c);
    printf("%c",c);
    float result=minicalc(a,b,c);
    printf("%.2f",result);
}
float minicalc(int x,int y,char z)
{
    int r;
    if(z=='+')
    {
        r=x+y;
        return(r);
    }
    else if(z=='-')
    {
        r=x-y;
        return(r);
    }
    else if(z=='*')
    {
        r=x*y;
        return(r);
    }
    else if(z=='/')
    {
        r=x/y;
        return(r);
    }
    else
    {
        printf("\nYou have entered the wrong option");
        return(0);
    }
}
