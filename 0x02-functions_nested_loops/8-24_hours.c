#include "main.h"
/**
 * jack_baure - prints minutes of the day
 * 
 * Return : no return value
 */
void jack_baure(void)
{
	int hour = 0;
	int minute = 0;
	int hour_remainder;
	int minutes_remainder;

	while (hour <= 23)
	{
	while (minute <= 59)
	{

	hours_remainder = hour % 10;
	_putchar(hour /10 + '0');
	_putchar(hour_remainder + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(min_remainder + '0');
	minute++;
	_putchar('\n');
	}
	hour++;
	minute = 0;
}
}