#include <stdio.h>
#include "main.h"

void print_to_98(int alpha)
{
if (alpha >= 98)
{
while (alpha > 98)
printf("%d, ", alpha--);
printf("%d\n", alpha);
}
else
{
while (alpha < 98)
printf("%d, ", alpha--);
printf("%d\n", alpha);
}
}
