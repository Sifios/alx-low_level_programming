#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else
    {
        _putchar('-');
        return -1;
    }
}
