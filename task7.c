#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Enter 2 numbers: ");
	scanf("%d",&num1);
	scanf("%d",&num2);

	if(num1 > num2){printf("The Largest Number is: %d\n",num1);}
	else {printf("The Largest Number is: %d\n",num2);}

	return 0;
}
