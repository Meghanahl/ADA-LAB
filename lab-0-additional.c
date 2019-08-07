#include<stdio.h>
int main()
{
	int n,key,t,arr[10];
	printf("enter the number of testcases\n");
	scanf("%d",&t);

	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the key value to search\n");
	scanf("%d",&key);
	printf("enter the elements\n");
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		
			if(arr[i]==key)
			{
		
			printf("element is present 1");
			break;
			}
	}
	
				printf("element is not present-1");
	
}
