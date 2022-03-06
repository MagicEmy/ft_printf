
#include  <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}

void ft_putnbr(int nb)
{
    int i;

    i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 10) > 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}


int check_arguments(va_list arguments, char format)
{
    int number;

    number = 0;
    if (format == 'i' || format == 'd')
        ft_putnbr(va_arg(arguments, int));
    return (number);
}

int ft_printf(const char *s, ...)
{
    va_list arguments;
    int     i;
    int     n_elements;

    i = 0;
    n_elements = 0;
    va_start(arguments, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            n_elements += check_arguments(arguments, s[i + 1]);
            i++;
        }
        else
            n_elements += ft_putchar(s[i]);
        i++;
    }
    va_end(arguments);
    return (i);
}