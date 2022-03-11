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

int     ft_printf(const char *s, ...);
void    ft_putnbr(int nb, int *len);
void    ft_putchar(char c, int *len);
void    ft_putstr(char *s, int *len);
void    ft_putnbr_hexa(unsigned int nb, int *len);
void    ft_putnbr_upper_hexa(unsigned int nb, int *len);
void    ft_put_ptr(size_t nb, int *len);
#endif