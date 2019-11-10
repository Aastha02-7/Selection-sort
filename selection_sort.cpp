#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],n,i,j,temp,loc,min;
	printf("\nHow many elements: ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=0;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if(loc!=1)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
	printf("The array after selection ssorrting is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
