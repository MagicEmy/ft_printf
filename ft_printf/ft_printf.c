/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:12:41 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/10 16:06:20 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_arguments(va_list arguments, char format, int *len)
{
	if (format == 's')
		ft_putstr(va_arg(arguments, char *), len);
	if (format == 'c')
		ft_putchar(va_arg(arguments, int), len);
	if (format == 'x')
		ft_putnbr_hexa(va_arg(arguments, unsigned int), len);
	if (format == 'X')
		ft_putnbr_upper_hexa(va_arg(arguments, unsigned int), len);
	if (format == 'p')
		ft_put_ptr(va_arg(arguments, size_t), len);
	if (format == 'u')
		ft_put_unsigned(va_arg(arguments, unsigned int), len);
	if (format == 'i' || format == 'd')
		ft_putnbr(va_arg(arguments, int), len);
	if (format == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		i;
	int		n_elements;

	i = 0;
	n_elements = 0;
	if (!s)
		return (0);
	va_start(arguments, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			check_arguments(arguments, s[i + 1], &n_elements);
			i++;
		}
		else
		{
			ft_putchar(s[i], &n_elements);
		}
		i++;
	}
	va_end(arguments);
	return (n_elements);
}
