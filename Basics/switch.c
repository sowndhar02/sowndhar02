#include<stdio.h>
int main()
{
	int date;
	printf("Enter the date\n");
	scanf("%d",&date);
	switch(date)
	{
		case 1:printf("Monday\n");
		       break;
		case 2: printf("Tuesday\n");
			break;
		default : printf("Invalid date\n");
	}

}
