#include<stdio.h>
#include<string.h>
int main()
{
        int arr[100][100],max,i,j,row_size,col_size;
	scanf("%d%d",&row_size,&col_size);
	for(i=0;i<row_size;i++)
	{
		for(j=0;j<col_size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][j];
	for(j=0;i<row_size;i++)
	{
		
		for(j=0;j<col_size;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
			//printf("%d ",arr[i][j]);
		}
		printf("\n");
        printf("%d",max);	
	}
	//printf("%d",max);
     return 0;
}
