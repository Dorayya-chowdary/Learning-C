#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter Number: ");
scanf("%d",&num);
printf("1 + ");
for(i=2;i<=num;i++)
{
if(i==num)
{
printf(" 1/%d ",i);
}
else
{
printf(" 1/%d +",i);
}
}
for(i=1;i<=num;i++)
{
sum = sum + i;
}
printf("\nSum = 1/%d",sum);
return 0;
}
