 
#include <bits/stdc++.h> 
using namespace std; 
  
#define MAX 10
  
#define INF 99
int main()  
{  
    int graph[MAX][MAX],dist[MAX][MAX];
	int i,j,k,V;
	cout<<"Enter no. of vertices:";
	cin>>V;
	cout<<"\nEnter the adjacency matrix:\n";
    for(i=1;i<=V;i++)
    {
    	for(j=1;j<=V;j++)
    	{
    		cin>>graph[i][j];
    	}
    }
for (i=1; i<=V; i++) 
        for (j=1; j<=V; j++)  
            		dist[i][j] = graph[i][j];  
  for (k=1;k<=V;k++)  
    {  
		for (i=1; i<=V; i++)  
        {  
            for (j=1; j<=V; j++)  
            {  
          
                if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }  
	cout<<"The following matrix shows the shortest distances between every pair of vertices \n";  
    for (int i=1; i<=V; i++)  
    {  
        for (int j=1; j<=V; j++)  
        {  
            if (dist[i][j] == INF)  
                cout<<"INF\t";  
            else
                cout<<dist[i][j]<<"\t";  
        }  
        cout<<endl;  
    }    
    return 0;  
}
/*------output----Enter no. of vertices:5

Enter the adjacency matrix:
0	2	99	1	8
6	0	3	2	99
99	99	0	4	99
99	99	2	0	3
3	99	99	99	0
The following matrix shows the shortest distances between every pair of vertices 
0	2	3	1	4	
6	0	3	2	5	
10	12	0	4	7	
6	8	2	0	3	
3	5	6	4	0

