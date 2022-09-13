#include "main.h"

/**
 * jack_bauer - Print every minute of the day from 0:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr1 = 0;
	int hr2 = 0;
	int sec1 = 0;
	int sec2 = 0;

	while (hr1 < 3)
	{
		while (hr2 <= 9)
		{
			if (hr1 == 2 && hr2 == 4)
				break;
			while (sec1 < 6)
			{

				while (sec2 <= 9)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(sec1 + '0');
					_putchar(sec2 + '0');
					_putchar('\n');
					sec2++;
				}
				sec2 = 0;
				sec1++;
			}
			sec1 = 0;
			hr2++;
		}
		hr2 = 0;
		hr1++;
	}
}
