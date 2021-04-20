//Addition of two matix
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],res[100][100],i,j,ra,ca,rb,cb;
	printf("enter first matrix size\n");
	scanf("%d%d",&ra,&ca);
	printf("enter values of row and columns\n");
	for(i=0;i<ra;i++)
	{
		for(j=0;j<ca;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix size\n");
	scanf("%d%d",&rb,&cb);
	printf("enter values of row and columns\n");
	for(i=0;i<rb;i++)
	{
		for(j=0;j<cb;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(ca==cb && ra==rb)
	{
		printf("Addition of two matrixx\n");
	   for(i=0;i<ra;i++)
     	{
		for(j=0;j<cb;j++)
		{
			res[i][j]=a[i][j]+b[i][j];
		}
	    }
	 for(i=0;i<ra;i++)
	  {
		for(j=0;j<cb;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
   	  }
    }
    else
    {
    	printf("addition not possible");
	}
}
