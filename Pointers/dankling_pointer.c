#include<stdio.h>
#include<stdlib.h>

int *CreativeIntArray()
{
	int arr[]={1, 2, 3, 4, 5};
	return arr;
}
int main()
{
	int *ptr=CreativeIntArray();
	printf("%d\n", *ptr);
}
