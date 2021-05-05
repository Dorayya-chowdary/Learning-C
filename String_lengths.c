//string lengths
#include<string.h>
#include<stdio.h>
int main()
{
	char str[100][100];
	int i,size,len;
	printf("enter size\n");
	scanf("%d",&size);
		for(i=0;i<size;i++)
	{
		printf("enter string %d\n",i+1);
		scanf(" %[^\n]s",&str[i]);
	}
	for(i=0;i<size;i++)
	{
		len=strlen(str[i]);
		printf("Length of the string %d =%d\n",i+1,len);
	}
   	   
}
