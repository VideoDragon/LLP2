#include <stdio.h>
int main(void)
{
   
	int num1, num2;

	printf("Enter 1st number: ");
	scanf("%d", &num1);

	printf("Enter 2nd number: ");
	scanf("%d", &num2);

	int sum, avg, sqr;
	sum = num1 + num2;
	avg = sum / 2;
	sqr = (num1 * num1) + (num2 + num2);

	printf("Sum: %d Avg: %d Sqr: %d", sum, avg, sqr);
	
	return 0;
	

}

