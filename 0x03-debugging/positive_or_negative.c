#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - writes positive or negative number
 * @i: int type value 
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
