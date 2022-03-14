/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_conversions_char.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:12:49 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/10 16:00:05 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int *len)
{
	write (1, &c, 1);
	*len += 1;
}

void	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		*len += 6;
	}
	else
	{
		while (s[i])
			ft_putchar(s[i++], len);
	}
}

void	ft_nb_to_c(int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + '0', len);
	else
		ft_putchar(nb + 'a' - 10, len);
}

void	ft_nb_to_upperc(int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + '0', len);
	else
		ft_putchar(nb + 'A' - 10, len);
}
