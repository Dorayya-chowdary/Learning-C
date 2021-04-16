#include<stdio.h>
int main()

{
	char str[100];
	int temp,i,j,len;
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++);
	len=i;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		
	}
	printf("%s",str);
	
	
}




