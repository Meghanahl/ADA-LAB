#include<stdio.h>

int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},min,mincost=0,cost[10][10];
int main()
{
	printf("enter the num of nodes:");
	scanf("%d",&n);
	printf("enter the adjacency matrix:");
	 for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
		visited[1]=1;
		printf("\n");
		while(ne<n)
		{
			for(i=1,min=999;i<=n;i++)
				for(j=1;j<=n;j++)
					if(cost[i][j]<min)
						if(visited[i]!=0)
						{
							min=cost[i][j];
							a=i;
							b=j;
						}
					if(visited[a]==0||visited[b]==0)
					{
						printf("edge%d:(%d,%d),distance:%d\n",ne++,a,b,min);
						mincost+=min;
						visited[b]=1;
					}
				cost[a][b]=cost[b][a]=999;
		}
         printf("minimum distance=%d\n",mincost);
		 return 0;
}
/*--------------------------
enter the num of nodes:4
enter the adjacency matrix:999 1 5 2
1 999 999 999
5 999 999 3
2 999 3 999

edge1:(1,2),distance:1
edge2:(1,4),distance:2
edge3:(4,3),distance:3
minimum distance=6
