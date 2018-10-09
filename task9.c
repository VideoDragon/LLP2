#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main(void)
{
   
	int max = 100;
	int min = 1;

	srand(time(0));
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand()  % (max + 1 - min) + min);
	}
	
}

