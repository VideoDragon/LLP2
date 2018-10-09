#include <stdio.h>

int main(void)
{
	int num[10];
	int i=0;
	int max=0;

	printf("Enter 10 numbers\n");

	while(i < 10)
	{	
		printf("Enter number %d: ", i+1);
		scanf("%d", &num[i]);


		if (num[i] > max) 
		{
            		max = num[i]; 
		}

		i++;
	}

	
  
	printf("The largest Number is: %d\n\n", max);

	return 0;
}
