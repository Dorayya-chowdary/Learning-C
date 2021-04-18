#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i,size,len,max;
	printf("enter size\n");
	scanf("%d",&size);
		for(i=0;i<size;i++)
	{
		printf("enter string %d\n",i+1);
		scanf(" %[^\n]s",&str[i]);
	}
	max=0;
	for(i=1;i<size;i++)
	{
		if(len=strlen(str[i])>strlen(str[max]))
		{
			max=i;
		}

	}
   	 printf(" position:%d\n string:%s\n length:%d ",max,str[max],strlen(str[max])); 
}
