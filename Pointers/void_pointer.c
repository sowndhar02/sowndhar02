#include<stdio.h>
void main()
{
	int num=2;
	float f=3.4;
	char ch='A';

	void *ptr;
	ptr=&num;
	printf("%d\n",*((int *)ptr));
	
	ptr=&f;
	printf("%f\n",*((float *)ptr));
	
	ptr=&ch;
	printf("%c\n",*((char *)ptr));

}
