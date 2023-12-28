#include<stdio.h>
void main()
{
	int a[5],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter an array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
		printf("Displayed 5 int\n");
	for(i=0;i<ele;i++)
	printf("%d\n",a[i]);
}
