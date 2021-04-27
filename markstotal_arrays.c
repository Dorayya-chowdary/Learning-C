#include<stdio.h>
int main()
{
	int marks[100],i,subs,total=0;
	scanf("%d",&subs);
	for(i=0;i<subs;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<subs;i++)
	{
        total+=marks[i];		
        
	}
	printf("total marks=%d",total);
}
