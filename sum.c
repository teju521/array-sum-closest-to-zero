#include<stdio.h>
int main(void)
{
	int a[20];
	int i,j,num,temp=0;
	printf("Enter the no.of elements into array");
	scanf("%d",&num);
	printf("Enter elements into array\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			temp=a[i]+a[j];
			if(temp==0)
				printf("The two numbers are %d,%d",a[i],a[j]);
		}
	}
	return 0;
}