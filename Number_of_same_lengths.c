#include<string.h>
#include<stdio.h>
int main()
{
	char str[100][100];
	int i,size,len,max,maxlen;
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
		if(len=strlen(str[i])>=strlen(str[max]))
		{
	       max=i;	
		}
    }
   	 //printf(" position:%d\n string:%s\n length:%d ",a,str[max],strlen(str[max])); 
    maxlen=strlen(str[max]);
    for(i=0;i<size;i++)
    {
    	if(maxlen==strlen(str[max]))
    	{
    		printf(" position:%d\n string:%s",i,str[max]);
		}
	}
}
