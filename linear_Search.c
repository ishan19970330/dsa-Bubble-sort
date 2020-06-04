#include<stdio.h>

int main()
{
	int data,i;
	int arr[10]={1,22,11,20,33,44,3,33,34,52};
	
	printf("Please enter if you want to number= ");
	scanf("%d",&data);
	for(i=0;i<arr;i++)
	{
		if(arr[i]==data)
		{
			printf("You entered value is found index is= %d",i);
			break;	
		}	
	}
	if(i==10)
	{
		printf("You entered value is not found");
	}
	
}
