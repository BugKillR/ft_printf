#include "printf.h"

static void  ft_solid_hexaup(unsigned int i, int *chars)
{
    if (i > 15)
        ft_solid_hexaup(i / 16, chars);
    *chars += ft_putchar(HEXA_UPPER[i % 16]);
}

int ft_puthexaup(unsigned int i)
{
    int chars;

    chars = 0;
    ft_solid_hexaup(i, &chars);
    return (chars);
}