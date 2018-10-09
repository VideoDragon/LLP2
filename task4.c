#include <stdio.h>

int main(void)
{
	int var = 25;
	
	for(;;)
	{
		var = var+100;
		printf("%d\n",var);
	}

	return 0;
}
