#include<stdio.h>
int main()
{
	int arr[5],i,size,even=0,odd=0,e=0,o=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			e+=arr[i];
			even++;
		}
		else
		{
		    o+=arr[i];    
			odd++;
		}
	}
	printf("sum of even numbers=%d\n",e);
	printf("sum of odd numbers=%d\n",o);
	printf("even numbers:%d \n",even);
	printf("odd number:%d",odd);
}
