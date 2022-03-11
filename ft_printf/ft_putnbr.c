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

void	ft_putchar(char c, int *len)
{
	write (1, &c, 1);
	*len +=1;
}

void	ft_putnbr(int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = nb * -1;
	}
	if (nb > 0)
		ft_putnbr(nb / 10, len);
	ft_putchar(nb % 10 + '0', len);
}

void	ft_putnbr_hexa(unsigned int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = nb * -1;
	}
	if ((nb / 16) > 0)
	{
		ft_putnbr_hexa(nb / 16, len);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0', len);
		else
			ft_putchar(nb % 16 + 'a' - 10, len);
	}
	else
	{
		if (nb % 16 <= 9)
			ft_putchar(nb + '0', len);
		else
			ft_putchar(nb + 'a' - 10, len);
	}
}

void	ft_putnbr_upper_hexa(unsigned int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = nb * -1;
	}
	if ((nb / 16) > 0)
	{
		ft_putnbr_hexa(nb / 16, len);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0', len);
		else
			ft_putchar(nb % 16 + 'A' - 10, len);
	}
	else
	{
		if (nb % 16 <= 9)
			ft_putchar(nb + '0', len);
		else
			ft_putchar(nb + 'A' - 10, len);
	}
}

void	ft_put_ptr(size_t nb, int *len)
{
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16, len);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0', len);
		else
			ft_putchar(nb % 16 + 'a' - 10, len);
	}
	else if (nb < 16)
	{
		ft_putchar('0', len);
		ft_putchar('x', len);
		if (nb % 16 <= 9)
			ft_putchar(nb + '0', len);
		else
			ft_putchar(nb + 'a' - 10, len);
	}
}
