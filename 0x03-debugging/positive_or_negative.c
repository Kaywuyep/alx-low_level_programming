#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - A function that writes a positive or negative integer
 * @i: int type number
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
}
