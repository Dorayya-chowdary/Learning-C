
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,size;
	scanf("%d",&size);
	arr=(int *)malloc(size*sizeof(int));//5*4=20
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

