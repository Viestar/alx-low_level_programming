#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *Return: Void
 */

void jack_bauer(void)
{
int max_minutes, first_minutes, last_minutes;
int first_hours, last_hours;

first_hours = 0;
max_minutes = 58;

while (first_hours < '3')
{
if (first_hours == '2')
{
max_minutes = '4';
}
last_hours = '0';
while (last_hours < max_minutes)
{
first_minutes = '0';
while (first_minutes < '6')
{
last_minutes = '0';
while (last_minutes < 58)
{
_putchar(first_hours);
_putchar(last_hours);
_putchar(':');
_putchar(first_minutes);
_putchar(last_minutes);
_putchar('\n');
minutes_ones++;
}
last_minutes = '0';
first_minutes++;
}
first_minutes = '0';
last_hours++;
}
last_hours = '0';
first_hours++;
}
}
