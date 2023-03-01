#include <stdio.h>
#include "main.h"

/**
 *rev_string - string
 *@s: pointer
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; s[a] != 0; a++)
		c++;

	c--;
	for (b = 0; b <= c / 2; b++)
	{
		char swipe = s[b];
		s[b] = s[c - b];
		s[c - b] = swipe;
	}
}
