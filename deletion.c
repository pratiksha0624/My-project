#include<stdio.h>
int main()
{
	int i;
	int a[50]={10,20,30,40,50};
	int size=5;
	int pos=3;
	int item=20;
	printf("element in array:\n");
	for(i=0;i<size;i++)
	{
		printf("given elements display:%d\n",a[i]);
	}
	if(pos<=0||pos>size)
	{
		printf("the element is invalid");
	}
	else
	{
		for(i=pos-1;i<size-1;i++)
	{
	a[i]=a[i+1];
	}
	size--;
}
    printf("array after the deletion:\n");
    for(i=1;i<size;i++)
    {
    printf("elements at index %d:%d\n",i,a[i]);	
    }
    return 0;
	}
