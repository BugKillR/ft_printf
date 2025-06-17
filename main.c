#include "printf.h"
#include <stdio.h>
#include <stdlib.h>

int sum(int i, ...)
{
    va_list args;
    int     res;
    int     count;

    res = 0;
    count = 0;
    va_start(args, i);
    while (count++ < i)
        res += va_arg(args, int);
    va_end(args);
    return (res);
}

int main(void)
{
    int i = sum(5, 3, 2, 7, 9, 1);
    char c = 'a';
    ft_printf("%p\n", NULL);
    printf("%p\n", NULL);
    return (0);
}