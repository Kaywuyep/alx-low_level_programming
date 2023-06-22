#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
day = 29;
month = 2;
year = 2000;
if ((year % 4 == 0) && ( year % 400 == 0 || year % 100 != 0))
{
if ((month == 2 && day == 29) && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
{
printf("Date: %02d/%02d/%d\n", month, day, year);
}
else
{
printf("Invalid date: %02d/%02d/%d\n", month, day, year);
}
}
}
