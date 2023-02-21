#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *Return: Void
 */

void jack_bauer(void)
{
  int minutes = 0;
  int hours = 0;

  for (hours = 00; hours <= 23; hours++)
    {
      for (minutes = 00; minutes <=59; minutes++)
	{
	  _putchar(hours);
	  _putchar(':');
	  _putchar(minutes);
	  _putchar('\n');
	}
    }
c}
