/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/09 15:36:15 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/10 15:53:34 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_hexa(int nb);
int	ft_putnbr_upper_hexa(int nb);
int	ft_put_ptr(size_t nb);
#endif