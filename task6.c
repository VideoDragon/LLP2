#include <stdio.h>

int main(void)
{
	int inputSeconds;

	int hours, minutes, seconds;
	int remainingSeconds;

	int secondsInHour = 60*60;
	int secondsInMinute = 60;

	printf("Enter seconds : ");
  	scanf("%d",&inputSeconds);

	hours = (inputSeconds/secondsInHour);

	remainingSeconds = inputSeconds - (hours * secondsInHour);
	minutes = remainingSeconds/secondsInMinute;

	remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
  	seconds = remainingSeconds;

  	printf("%d hour, %d minutes and %d seconds\n\n",hours,minutes,seconds);

}
