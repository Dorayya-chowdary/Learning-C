#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int id;
	char name[100];
	char branch[100];
};
typedef struct Student STD;
int main()
{
	
	STD *s;
	int n,i;
	scanf("%d",&n);//2
	s=(STD *)malloc(n*sizeof(STD));
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i].id);
		scanf(" %[^\n]s",&s[i].name);
		scanf(" %[^\n]s",&s[i].branch);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i].id);
		printf(" %s ",s[i].name);
		printf(" %s\n",s[i].branch);
	}
}
