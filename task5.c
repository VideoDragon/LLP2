#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number between 1 and 100: \n");

	scanf("%d", &num);

	if(num > 1 && num < 100){return 0;}
	else {printf("Error: Bad");}
}
