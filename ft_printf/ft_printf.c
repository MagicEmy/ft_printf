/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:12:41 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/09 18:08:16 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arguments(va_list arguments, char format)
{
	int	number;

	number = 0;
	if (format == 's')
		number += ft_putstr(va_arg(arguments, char *));
	if (format == 'c')
		number += ft_putchar(va_arg(arguments, int));
	if (format == 'x')
		number += ft_putnbr_hexa(va_arg(arguments, int));
	if (format == 'X')
		number += ft_putnbr_upper_hexa(va_arg(arguments, int));
	if (format == 'i' || format == 'd')
		number += ft_putnbr(va_arg(arguments, int));
	return (number);
}

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		i;
	int		n_elements;

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
		{
			ft_putchar(s[i]);
			n_elements++;
		}
		i++;
	}
	va_end(arguments);
	return (n_elements);
}
