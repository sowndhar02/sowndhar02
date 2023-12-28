#include<stdio.h>
#include<stdlib.h>
struct ST
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	int ele,i,j;
	struct ST v[2],t;
	ele=sizeof(v)/sizeof(v[0]);
	for(i=0;i<ele;i++)
	{
		printf("Enter the rollno\n");
		scanf("%d",&v[i].rollno);
		printf("Enter the name\n");
		scanf("%s",v[i].name);
		printf("Enter the marks\n");
		scanf("%f",&v[i].marks);
	}
	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);

	int op;
	printf("Enter your choice\n");
	printf("1)Rollno_wise 2)name_wise 3)marks_wise 4)exit\n");
	scanf("%d",&op);

if(op==4)
{
exit(0);
}

	if(op==1)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(v[i].rollno > v[j+1].rollno)
				{
					t=v[i];
					v[i]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}













}
