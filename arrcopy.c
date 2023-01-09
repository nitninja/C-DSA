#include <stdio.h>


void transpose(int x[][])
{
	int y[n][m];  
	for (int i=0;i<n;++i) 
	{
		for (int j=0;j<m;++j) 
{

		y[i][j]=x[j][i];  
} 
	}
	 
	for (int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			printf("%d\t",y[i][j]);
		}
	printf("\n"); 
	}
	
}

int main()
{
    int n,m,num;
    scanf("%d%d",&n,&m);
	int arr[][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
transpose(arr,n,m);  
	
} 