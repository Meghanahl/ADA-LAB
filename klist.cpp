#include <iostream>

using namespace std;
int maximum(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	if(b>c)
		return b;
	else
		return c;
}
int main()
{
	
	int i,N,j,k,min_range,cur,min,max,arr1[20],arr2[20],arr3[20];
	min_range=30;
	cur=0;
	min=0;
	max=0;
	cout<<"enter the number of elemnts";
	cin>>N;
	cout<<"Enter elments of array 1";
	for(int i=1;i<=N;i++)
		cin>>arr1[i];
	cout<<"Enter elments of array 2";
	for(int i=1;i<=N;i++)
		cin>>arr2[i];
	cout<<"Enter elments of array 3";
	for(int i=1;i<=N;i++)
		cin>>arr3[i];
	i=1;
	j=1;
	k=1;
	while(i<=N && j<=N && k<=N)
	{
		//min=minimum(arr1[i],arr2[j],arr3[k]);
		max=maximum(arr1[i],arr2[j],arr3[k]);
		if(arr1[i]<arr2[j] && arr1[i]<arr3[k])
		{
			min=arr1[i];
			i++;
			
		}
		if(arr2[j]<arr1[i] && arr2[j]<arr3[k])
		{
		
			min=arr2[j];
				j++;
		}
		if(arr3[k]<arr1[i] && arr3[i]<arr2[j])
		{
			
			min=arr3[k];
			k++;
		}
		cur=abs(max-min);
		if(min_range>cur)
			min_range=cur;
	}
	cout<<"The smallest range is ["<<min<<","<<max<<"]="<<min_range;
	return 0;
}
