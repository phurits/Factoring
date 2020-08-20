#include<stdio.h>

int main()
{
	int a,i=2;
	printf("Enter Number : ");
	scanf_s("%d",&a);
	printf("Factoring Result : ");
	while (i <= a)
	{
		if (a % i == 0)
		{
			if (a == i)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d x ", i);
			}
			a /= i;
		}
		else i++;
	}
	return 0;
}