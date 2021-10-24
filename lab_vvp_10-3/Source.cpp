#include <stdio.h>
int main()
{
	int num;
	printf("Enter integer positive number: ");
	scanf("%i", &num);
	if (num < 1)
	{
		printf("You should enter integer positive number!!!");
	}
	else
	{
		if ((num % 2 == 0) && ((num / 10) < 10) && (num >= 10))
			printf("True");
		else
			printf("False");
	}

}