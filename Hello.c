#include<stdio.h>
main()
{
//1. Display the menu
printf("Enter a number:");
//2. Read their choice
int x=0,y=1;
scanf("%d%d",&x,&y);
//3. Based on their choice

switch(x,y)
{
case 1:
printf("enter any number");
break;
default: printf("choice other than 0 and 1");
}
return 0:;
}
