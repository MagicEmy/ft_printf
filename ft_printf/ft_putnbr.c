/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:12:49 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/10 16:00:05 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putnbr(int nb)
{
	static int	times;

	times = times +1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
	return (times);
}

int	ft_putnbr_hexa(int nb)
{
	int	output_len;

	output_len = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 16) > 0)
	{
		ft_putnbr_hexa(nb / 16);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
	else
	{
		if (nb % 16 <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb + 'a' - 10);
	}
	return (output_len);
}

int	ft_putnbr_upper_hexa(int nb)
{
	int	output_len;

	output_len = 0;
	if (nb < 0)
	{
		output_len += ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 16) > 0)
	{
		output_len += 1;
		ft_putnbr_upper_hexa(nb / 16);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'A' - 10);
	}
	else
	{
		output_len += 1;
		if (nb % 16 <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb + 'A' - 10);
	}
	return (output_len);
}

int	ft_put_ptr(size_t nb)
{
	int	output_len;

	output_len = 0;
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
	else if (nb < 16)
	{
		write (1, "0x", 2);
		if (nb % 16 <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb + 'a' - 10);
	}
	return (output_len);
}
