// Insertion of an element in an array
#include<stdio.h>

// main function
int main(void)
{
	int a[100],i,n,pos,in,menu;
	printf("Enter no of elements in array: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);	}
	printf("Enter the insertion value: ");
	scanf("%d",&in);
	printf("The element is inserted in(select from menu):\n\t1. Beginning\n\t2. user defined\n\t3. End\n");
	scanf("%d",&menu);
	// insertion at the beginning
	if(menu==1)
	{
		pos=1;
		for(i=n+1;i>pos-1;i--)
		{	a[i]=a[i-1];	}
		a[pos-1]=in;
	}
	// insertion at any place
	else if(menu==2)
	{
		printf("Enter the position of insertion: ");
		scanf("%d",&pos);
		for(i=n;i>pos-1;i--)
		{	a[i]=a[i-1];	}
		a[pos-1]=in;
	}
	// insertion at the end
	else if(menu==3)
	{
		a[n]=in;
	}
	else
	{	
		printf("This is not a menu item !!!");
	}
	// printing the array after insertion
	printf("The array after insertion:\n");
	for(i=0;i<=n;i++)
	{	printf("%d ",a[i]);	}
}
