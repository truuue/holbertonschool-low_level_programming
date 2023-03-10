#include "main.h"

int _putchar(char c)
{
    return _putchar(c);
}

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

int _abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}
